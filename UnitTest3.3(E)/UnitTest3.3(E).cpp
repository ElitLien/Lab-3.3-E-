#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.3(E)/Object.h"
#include "../Lab_3.3(E)/Object.cpp"
#include "../Lab_3.3(E)/Triad.h"
#include "../Lab_3.3(E)/Triad.cpp"
#include "../Lab_3.3(E)/Time.h"
#include "../Lab_3.3(E)/Time.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33E
{
	TEST_CLASS(UnitTest33E)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time a(1, 2, 3);
			a++;
			int b = a.getFirst();
			Assert::AreEqual(b, 0);
		}
	};
}
