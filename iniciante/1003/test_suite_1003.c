#include "../iniciante.h"

MU_TEST(test_sum_a_equals_30_and_b_equals_10)
{
	int a_value = 30;
	int b_value = 10;
	int expected_value = 40;
	int result = wkh_sum(a_value, b_value);
	
	mu_assert(result == expected_value, "result should be 40");
}

MU_TEST(test_sum_a_equals_minus_30_and_b_equals_10)
{
	int a_value = -30;
	int b_value = 10;
	int expected_value = -20;
	int result = wkh_sum(a_value, b_value);
	
	mu_assert(result == expected_value, "result should be -20");
}

MU_TEST(test_sum_a_equals_0_and_b_equals_0)
{
	int a_value = 0;
	int b_value = 0;
	int expected_value = 0;
	int result = wkh_sum(a_value, b_value);
	
	mu_assert(result == expected_value, "result should be 0");
}

MU_TEST_SUITE(suite_test)
{
	MU_RUN_TEST(test_sum_a_equals_30_and_b_equals_10);
	MU_RUN_TEST(test_sum_a_equals_minus_30_and_b_equals_10);
	MU_RUN_TEST(test_sum_a_equals_0_and_b_equals_0);
}

int main()
{
	MU_RUN_SUITE(suite_test);
	MU_REPORT();
	return MU_EXIT_CODE;
}
