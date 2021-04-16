#include "unity.h"
#include <play_quiz.h>

/* Modify these two lines according to the project */
#include <play_quiz.h>
#define PROJECT_NAME    "Quiz Game"

/* Prototypes for all the test functions */
void test_startQuiz(void);
void test_startQuiz_testcase2(void);
void test_display(void);
void test_help(void);
// void test_divide(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_startQuiz);
  RUN_TEST(test_startQuiz_testcase2);
  RUN_TEST(test_display);
  RUN_TEST(test_help);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_startQuiz(void) {
  TEST_ASSERT_EQUAL(30, start());
  TEST_ASSERT_EQUAL(-10, start());
  TEST_ASSERT_EQUAL(-30, start());
  TEST_ASSERT_EQUAL(10, start());
}
void test_startQuiz_testcase2(void) {
 
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(1500, add(750, 7500));
}
void test_display(void) {
  TEST_ASSERT_EQUAL(-3, display());
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(1, subtract(1000, 900));
}

void test_help(void) {
  TEST_ASSERT_EQUAL(0, help());
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(2, multiply(2, 5));
}
