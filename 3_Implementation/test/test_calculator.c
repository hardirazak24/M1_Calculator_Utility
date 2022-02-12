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
    TEST_ASSERT_EQUAL(100, addition(50, 50));
    TEST_ASSERT_EQUAL(36, addition(12, 24));
    TEST_ASSERT_EQUAL(2, addition(0, 2));
}

void test_sub()
{
    TEST_ASSERT_EQUAL(10, subtraction(20, 10));
    TEST_ASSERT_EQUAL(-10, subtraction(10, 20));
}

void test_mul()
{
    TEST_ASSERT_EQUAL(200, multiplication(20, 10));
    TEST_ASSERT_EQUAL(48, multiplication(12, 4));
}
void test_mod()
{
  TEST_ASSERT_EQUAL(1, modulus(5, 2));
}
void test_fact()
{
  TEST_ASSERT_EQUAL(120, factorial(5));
}
int test_main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_sub);
  RUN_TEST(test_mul);
  RUN_TEST(test_mod);
  RUN_TEST(test_fact);
  /* Close the Unity Test Framework */
  return UNITY_END();
}

