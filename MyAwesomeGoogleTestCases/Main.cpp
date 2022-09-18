#include <iostream>
#include <string>

#include <gtest/gtest.h>

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
	EXPECT_EQ(1, Count(5));
}

TEST(count1, numbers1) {
	EXPECT_EQ(2, Count(420));
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);

	int result = RUN_ALL_TESTS();
	

	return result;
}