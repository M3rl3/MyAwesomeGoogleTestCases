#include <iostream>
#include <string>

#include <gtest/gtest.h>
#include <BlackBoxTest.h>

//Returns number of digits in the passed number
int Count(int num) {
	int index = 0;
	while (num != 0) {
		num /= 10;
		index++;
	}
	//std::cout << index;
	return index;
}

TEST(count, numbers) {
	EXPECT_EQ(1, Count(6));
	EXPECT_EQ(3, Count(420));
	EXPECT_EQ(4, Count(69420));
}

TEST(invert, numbers) {
	EXPECT_EQ(-5, Invert(5));
	EXPECT_EQ(-25, Invert(25));
	EXPECT_EQ(-125, Invert(125));
	EXPECT_EQ(625, Invert(-625));
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);

	int result = RUN_ALL_TESTS();
	

	return result;
}