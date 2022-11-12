#include "pch.h"
#include "CppUnitTest.h"
#include "../TestLab11.3.3/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1133
{
	TEST_CLASS(UnitTest1133)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = main();
			Assert::AreEqual(t, 0);
		}
	};
}
