#include "pch.h"
#include "CppUnitTest.h"
#include "..\cppsample\mygraphics.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestSAmple
{
	TEST_CLASS(UnitTestSAmple)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			GraphicsFile* myfile = new GraphicsFile("images\\white.png");
			bool exist = myfile->Exist();
		}
	};
}
