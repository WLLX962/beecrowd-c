#include "../iniciante.h"

MU_TEST(test_sum_a_equals_10_and_b_equals_9)
{
	int a_value = 10;
	int b_value = 9;
	int expected_value = 19;
	int result = wkh_sum(a_value, b_value);
	
	mu_assert(result == expected_value, "result should be 19");
}

MU_TEST(test_sum_a_equals_minus_10_and_b_equals_4)
{
	int a_value = -10;
	int b_value = 4;
	int expected_value = -6;
	int result = wkh_sum(a_value, b_value);
	
	mu_assert(result == expected_value, "result should be -6");
}

MU_TEST(test_sum_a_equals_15_and_b_equals_minus_7)
{
	int a_value = 15;
	int b_value = -7;
	int expected_value = 8;
	int result = wkh_sum(a_value, b_value);
	
	mu_assert(result == expected_value, "result should be 8");
}

MU_TEST_SUITE(suite_test)
{
	MU_RUN_TEST(test_sum_a_equals_10_and_b_equals_9);
	MU_RUN_TEST(test_sum_a_equals_minus_10_and_b_equals_4);
	MU_RUN_TEST(test_sum_a_equals_15_and_b_equals_minus_7);
}

int main()
{
	MU_RUN_SUITE(suite_test);
	MU_REPORT();
	return MU_EXIT_CODE;
}
