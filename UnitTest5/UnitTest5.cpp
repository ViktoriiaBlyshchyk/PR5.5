#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\PR5.5\PR5.5\PR5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 20;
			int t;
			t = sum(n % 10 + sum(n / 10));
			Assert::AreEqual(t, 2);
		}
	};
}
