#include "pch.h"
#include "CppUnitTest.h"
#include "..\cppsample\mygraphics.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestSAmple
{
	TEST_CLASS(UnitTestSAmple)
	{
	public:
		BEGIN_TEST_METHOD_ATTRIBUTE(TestMethod1)
			
		END_TEST_METHOD_ATTRIBUTE()

		
		TEST_METHOD(TestMethod1)
		{
			GraphicsFile* myfile = new GraphicsFile("images\\white.png");
			bool exist = myfile->Exist();
		}
	};
}
