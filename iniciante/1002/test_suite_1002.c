#include "../iniciante.h"

MU_TEST(test_area_with_radius_equals_2)
{
	double radius_value = 2.00;
	double expected_value = 12.5664;
	double result = wkh_area(radius_value);
	
	mu_assert(result == expected_value, "result should be 12.5664");
}

MU_TEST(test_area_with_radius_equals_100_dot_64)
{
	double radius_value = 100.64;
	double expected_value = 31819.3103;
	double result = wkh_area(radius_value);
	
	mu_assert(result == expected_value, "result should be 31819.3103");
}

MU_TEST(test_area_with_radius_equals_150)
{
	double radius_value = 150.00;
	double expected_value = 70685.775;
	double result = wkh_area(radius_value);
	
	mu_assert(result == expected_value, "result should be 70685.775");
}

MU_TEST_SUITE(suite_test)
{
	MU_RUN_TEST(test_area_with_radius_equals_2);
	MU_RUN_TEST(test_area_with_radius_equals_100_dot_64);
	MU_RUN_TEST(test_area_with_radius_equals_150);
}

int main()
{
	MU_RUN_SUITE(suite_test);
	MU_REPORT();
	return MU_EXIT_CODE;
}
