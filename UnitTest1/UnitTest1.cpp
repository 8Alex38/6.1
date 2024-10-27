#include "pch.h"
#include "CppUnitTest.h"
#include "../АП-6.1/АП-6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestAP61
{
    TEST_CLASS(AP61Tests)
    {
    public:

        TEST_METHOD(TestGenerateArray)
        {
            const int size = 5;
            int arr[size];
            int minValue = -10, maxValue = 10;

            generateArray(arr, size, minValue, maxValue);

            for (int i = 0; i < size; i++)
            {
                Assert::IsTrue(arr[i] >= minValue && arr[i] <= maxValue, L"Element is out of range");
            }
        }

        TEST_METHOD(TestCountAndSum)
        {
            int arr[] = { 1, 2, -3, 4, 5 };
            int size = sizeof(arr) / sizeof(arr[0]);

            int expectedCount = 2;
            int expectedSum = 6;

            int actualCount, actualSum;

            countAndSum(arr, size, actualCount, actualSum);

            Assert::IsTrue(actualCount == expectedCount, L"Incorrect count");
            Assert::IsTrue(actualSum == expectedSum, L"Incorrect sum");
        }

    };
}