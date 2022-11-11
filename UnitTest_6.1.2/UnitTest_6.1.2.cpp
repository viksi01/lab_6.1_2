#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.1.2/lab_6.1.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest612
{
	TEST_CLASS(UnitTest612)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int r[5] = { 33,61,32,6,22 };
			int t = Sum(r,5, 5);
			Assert::AreEqual(t, 159);
		}
	};
}
