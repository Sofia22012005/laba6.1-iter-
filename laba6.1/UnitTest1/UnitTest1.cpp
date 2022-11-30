#include "pch.h"
#include "CppUnitTest.h"
#include "../laba6.1/laba6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(number)
		{
			int arr[5]{ -1,4,5,7,8 };
			int num = Count(arr, 5);
			Assert::AreEqual(num, 5);
		}

		TEST_METHOD(sum)
		{
			int arr[5]{ -1,4,5,7,8 };
			int num = Sum(arr, 5);
			Assert::AreEqual(num, 23);
		}

		TEST_METHOD(zero_test)
		{
			int arr[5]{ -1,4,5,7,8 };
			zero(arr, 5);
			Assert::AreEqual(arr[1], 0);
			Assert::AreEqual(arr[4], 0);

		}
	};
}