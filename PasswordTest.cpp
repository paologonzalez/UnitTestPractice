/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, three_a_one_b)
{
	Password my_password;
	ASSERT_EQ(3, my_password.count_leading_characters("aaab"));
}

TEST(PasswordTest, one_a_one_b)
{
	Password my_password;
	ASSERT_EQ(1, my_password.count_leading_characters("ab"));
}

TEST(PasswordTest, no_characters)
{
	Password my_password;
	ASSERT_EQ(0, my_password.count_leading_characters(""));
}

TEST(PasswordTest, b_sandwitched_by_a)
{
	Password my_password;
	ASSERT_EQ(1, my_password.count_leading_characters("aba"));
}

TEST(PasswordTest, a_b_quad_a)
{
	Password my_password;
	ASSERT_EQ(1, my_password.count_leading_characters("abaaaa"));
}

