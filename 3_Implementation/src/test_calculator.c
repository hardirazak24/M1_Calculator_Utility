#include "unity.h"
#include "calculator.h"

void setUp()
{

}

void tearDown()
{
}

void test_add()
{
    int addition(int num1, int num2);
    TEST_ASSERT_EQUAL(30, addition(20, 10));
}

void test_sub()
{
    int subtraction(int num1, int num2);
    TEST_ASSERT_EQUAL(10, subtraction(20, 10));
}

void test_mul()
{
    int multiplication(int num1, int num2);
    TEST_ASSERT_EQUAL(200, multiplication(20, 10));
}

int test_main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_sub);
  RUN_TEST(test_mul);
  /* Close the Unity Test Framework */
  return UNITY_END();
}

