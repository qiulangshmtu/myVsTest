// gtestdemo.cpp : 定义控制台应用程序的入口点。
//


#include <stdio.h>
#include "stdlib.h"
#include <tchar.h>
//#include <gtest/gtest.h>
#include "D:\gtest\googletest-master\googletest\include\gtest\gtest.h"
#include <iostream>

int Foo(int a, int b)
{
	if (a == 0 || b == 0)
	{
		throw "don't do that";
	}
	int c = a % b;
	if (c == 0)
		return b;
	return Foo(b, c);
}
TEST(FooTest, HandleNoneZeroInput)
{
	EXPECT_EQ(2, Foo(4, 10));
	EXPECT_EQ(6, Foo(30, 18));
	EXPECT_STRCASEEQ("asdf", "Asdf");
	//std::cout << "adsfasdf" << std::endl;
}

int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	system("pause");
	return 0;
}