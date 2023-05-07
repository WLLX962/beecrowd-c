#include "../iniciante.h"

MU_TEST(test_hello_world)
{
	char * expected_value = "Hello World!";
	char * result = wkh_hello_world();
	
	mu_assert(result == expected_value, "result should be 'Hello World!'");
}

MU_TEST_SUITE(suite_test)
{
	MU_RUN_TEST(test_hello_world);
}

int main()
{
	MU_RUN_SUITE(suite_test);
	MU_REPORT();
	return MU_EXIT_CODE;
}
