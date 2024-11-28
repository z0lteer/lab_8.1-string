#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.1.string/lab8.1.str.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestFindThirdDot)
        {
            string str = "a.b.c.d.e";
            Assert::AreEqual(5, find(str));
        }

        TEST_METHOD(TestChangeEveryFourthCharacter)
        {
            string str = "abcdefghi";
            string expected1 = "abc.efg.i";
            Assert::AreEqual(expected1, change(str));
        }
    };
}