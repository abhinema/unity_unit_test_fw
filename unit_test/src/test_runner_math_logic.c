#include <stdio.h>
#include "unity.h"

extern void testAddition(void);
extern void testMultiplication(void);
extern void testMultiplicationboundary(void);
extern void testAdditionboundary(void);


int main(void)
{
    UnityBegin("./test_math_logic.c");
    RUN_TEST(testAddition, __LINE__);
    RUN_TEST(testAdditionboundary, __LINE__);
    RUN_TEST(testMultiplication, __LINE__);
    RUN_TEST(testMultiplicationboundary, __LINE__);
    UnityEnd();
}
