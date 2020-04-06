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
    TEST_ASSERT_EQUAL_INT(5, addition(3,2));
}

void testAddition1(void){
    TEST_ASSERT_EQUAL_INT(6, addition(3,2));
    TEST_ASSERT_EQUAL_INT(10, addition(3,2));
}
void testAdditionboundary(void){
    TEST_ASSERT_EQUAL_INT(255, addition(126,129));
    TEST_ASSERT_EQUAL_INT(255, addition(127,127));
}

void testMultiplication(void){
    TEST_ASSERT_EQUAL_INT(5, multiplication(3,2));
}

void testMultiplication1(void){
    TEST_ASSERT_EQUAL_INT(6, multiplication(3,2));
}
