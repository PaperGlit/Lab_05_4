#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab054
{
	TEST_CLASS(UnitTestLab054)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(S0(5), 4.24986073, 0.0000001);
			Assert::AreEqual(S0(5), S1(1, 5), 0.0000001);
			Assert::AreEqual(S0(5), S2(5), 0.0000001);
			Assert::AreEqual(S0(5), S3(1, 5, 0), 0.0000001);
			Assert::AreEqual(S0(5), S4(5, 0), 0.0000001);
		}
	};
}
