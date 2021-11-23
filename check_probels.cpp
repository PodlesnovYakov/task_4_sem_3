#include "pch.h"
#include "CppUnitTest.h"
#include "../task_4_sem_3/task_4_sem_3.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace checkprobels
{
	TEST_CLASS(checkprobels)
	{
	public:
		
		TEST_METHOD(just_string)
		{
			string t_input = "   a   b  c  e f    ";
			string t_actual = check_probel(t_input);
			string t_exprcted = "a b c e f";
			//Assert::AreEqual(t_actual.size(), t_exprcted.size(), L" different size");
			Assert::AreEqual(t_actual, t_exprcted);
		}
		TEST_METHOD(string_one_element)
		{
			string t_input = "   a   ";
			string t_actual = check_probel(t_input);
			string t_exprcted = "a";
			//Assert::AreEqual(t_actual.size(), t_exprcted.size(), L" different size");
			Assert::AreEqual(t_actual, t_exprcted);
		}
		TEST_METHOD(empty_string)
		{
			string t_input = "           ";
			string t_actual = check_probel(t_input);
			string t_exprcted = "";
			//Assert::AreEqual(t_actual.size(), t_exprcted.size(), L" different size");
			Assert::AreEqual(t_actual, t_exprcted);
		}
	};
}
