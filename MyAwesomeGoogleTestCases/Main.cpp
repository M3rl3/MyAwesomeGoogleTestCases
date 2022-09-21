#include <iostream>
#include <string>

#include <gtest/gtest.h>

#include "TestFunctions.h"
#include "BlackBoxTest.h"


//White Box test cases.

TEST(count, numbers) {
	EXPECT_EQ(2, Count(69));
	EXPECT_EQ(3, Count(420));
	EXPECT_EQ(4, Count(69420));
	EXPECT_EQ(5, Count(69420));
	EXPECT_EQ(1, Count(0));
}

TEST(cube, numbers) {
	EXPECT_EQ(8, Cube(2));
	EXPECT_EQ(27, Cube(3));
	EXPECT_EQ(125, Cube(5));
	EXPECT_EQ(5, Cube(420));
	EXPECT_EQ(0, Cube(0));
}

TEST(size, numbers) {
	EXPECT_EQ(4, Sizeof(1));
	EXPECT_EQ(4, Sizeof('a'));
	EXPECT_EQ(4, Sizeof(6.f));
	EXPECT_EQ(8, Sizeof(6.0));
}

TEST(fact, numbers) {
	EXPECT_EQ(1, Fact(1));
	EXPECT_EQ(2, Fact(2));
	EXPECT_EQ(6, Fact(3));
	EXPECT_EQ(24, Fact(4));
}

TEST(half, numbers) {
	EXPECT_EQ(1, Half(2));
	EXPECT_EQ(3, Half(6));
	EXPECT_EQ(2, Half(4));
}

//Black Box test cases.

TEST(square, numbers) {
	EXPECT_EQ(4, Square(2));
	EXPECT_EQ(36, Square(6));
	EXPECT_EQ(16, Square(4));
}

TEST(squareroot, numbers) {
	EXPECT_EQ(4, SquareRoot(16));
	EXPECT_EQ(36, SquareRoot(1296));
}

TEST(cuberoot, numbers) {
	EXPECT_EQ(2, CubeRoot(8));
	EXPECT_EQ(2, CubeRoot(1));
}

TEST(invert, numbers) {
	EXPECT_EQ(-625, Invert(625));
}

TEST(fibonacci, numbers) {
	EXPECT_EQ(5, Fibonacci(5));
}


int main(int argc, char** argv) {
	
	::testing::InitGoogleTest(&argc, argv);
	int result = RUN_ALL_TESTS();
	
	return result;
}