#include <stdio.h>
#include "unity.h"

extern void testAddition(void);
extern void testAddition1(void);
extern void testMultiplication(void);
extern void testMultiplication1(void);
extern void testAdditionboundary(void);


int main(void)
{
    UnityBegin("./test_math_logic.c");
    RUN_TEST(testAddition, __LINE__);
    RUN_TEST(testAddition1, __LINE__);
    RUN_TEST(testAdditionboundary, __LINE__);
    RUN_TEST(testMultiplication, __LINE__);
    RUN_TEST(testMultiplication1, __LINE__);
}
