#include "../iniciante.h"

MU_TEST(test_multiply_a_equals_3_and_b_equals_9)
{
	int a_value = 3;
	int b_value = 9;
	int expected_value = 27;
	int result = wkh_multiply(a_value, b_value);
	
	mu_assert(result == expected_value, "result should be 27");
}

MU_TEST(test_multiply_a_equals_minus_30_and_b_equals_10)
{
	int a_value = -30;
	int b_value = 10;
	int expected_value = -300;
	int result = wkh_multiply(a_value, b_value);
	
	mu_assert(result == expected_value, "result should be -300");
}

MU_TEST(test_multiply_a_equals_0_and_b_equals_9)
{
	int a_value = 0;
	int b_value = 9;
	int expected_value = 0;
	int result = wkh_multiply(a_value, b_value);
	
	mu_assert(result == expected_value, "result should be 0");
}

MU_TEST_SUITE(suite_test)
{
	MU_RUN_TEST(test_multiply_a_equals_3_and_b_equals_9);
	MU_RUN_TEST(test_multiply_a_equals_minus_30_and_b_equals_10);
	MU_RUN_TEST(test_multiply_a_equals_0_and_b_equals_9);
}

int main()
{
	MU_RUN_SUITE(suite_test);
	MU_REPORT();
	return MU_EXIT_CODE;
}
