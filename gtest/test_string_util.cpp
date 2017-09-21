#include <string>
#include "gtest/gtest.h"
#include "../src/string_util.h"

using namespace std;
class test_string_util : public ::testing::Test
{
};

TEST_F(test_string_util, int_to_str)
{
	string str = StringUtil::int_to_str(34);
    EXPECT_STREQ("34", str.c_str());
}

TEST_F(test_string_util, str_to_int)
{
	int num = StringUtil::str_to_int("100");
	EXPECT_EQ(num, 100);
}
