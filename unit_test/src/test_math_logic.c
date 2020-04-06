#include <stdio.h>
#include "unity.h"
#include "math_logic.h"
//#define TEST_INSTANCES
//#include "self_assessment_utils.h"

extern void testAddition(void);
static int SetToOneToFailInTearDown;
static int SetToOneMeanWeAlreadyCheckedThisGuy;

void setUp(){
    SetToOneToFailInTearDown = 0;
    SetToOneMeanWeAlreadyCheckedThisGuy = 0;
}
void tearDown(){
}

void testAddition(void){
    TEST_ASSERT_EQUAL_UINT8_MESSAGE(5, addition(3,2),"Unit Test Case1: testAddition" );
    TEST_ASSERT_EQUAL_UINT8_MESSAGE(6, addition(3,2),"Unit Test Case2: testAddition");
    TEST_ASSERT_EQUAL_UINT8_MESSAGE(10, addition(3,2),"Unit Test Case3: testAddition");
}

void testAdditionboundary(void){
    TEST_ASSERT_EQUAL_UINT8_MESSAGE(255, addition(126,129),"Unit Test Case1: Boundary condition Addition");
    TEST_ASSERT_EQUAL_UINT8_MESSAGE(255, addition(127,128),"Unit Test Case2: Boundary condition Addition");
    TEST_ASSERT_EQUAL_UINT8_MESSAGE(2, addition(130,128),"Unit Test Case3: Boundary condition Addition");
    TEST_ASSERT_NOT_EQUAL_UINT8_MESSAGE(3, addition(130,128),"Unit Test Case4: Boundary condition Addition");
}

void testMultiplication(void){
    TEST_ASSERT_EQUAL_UINT8_MESSAGE(5, multiplication(3,2),"Unit Test Case1: testMultiplication");
}

void testMultiplicationboundary(void){
    TEST_ASSERT_EQUAL_UINT8_MESSAGE(14, multiplication(135,2),"Unit Test Case1: testMultiplicationboundary");
    TEST_ASSERT_EQUAL_UINT8_MESSAGE(11, multiplication(135,2),"Unit Test Case2: testMultiplicationboundary");
}
