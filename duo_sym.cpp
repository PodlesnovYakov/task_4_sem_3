#include "pch.h"
#include "CppUnitTest.h"
#include "../task_4_sem_3/task_4_sem_3.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace duosym
{
	TEST_CLASS(duosym)
	{
	public:
		
		TEST_METHOD(just_string)
		{
			string t_input = "a b c d";
			string t_actual = duo_symbols(t_input);
			string t_exprcted = "aa bb cc dd";
			//Assert::AreEqual(t_actual.size(), t_exprcted.size(), L" different size");
			Assert::AreEqual(t_actual, t_exprcted);
		}
		TEST_METHOD(string_one_element)
		{
			string t_input = "a";
			string t_actual = duo_symbols(t_input);
			string t_exprcted = "aa";
			//Assert::AreEqual(t_actual.size(), t_exprcted.size(), L" different size");
			Assert::AreEqual(t_actual, t_exprcted);
		}
		TEST_METHOD(empty_string)
		{
			string t_input = "";
			string t_actual = duo_symbols(t_input);
			string t_exprcted = "";
			//Assert::AreEqual(t_actual.size(), t_exprcted.size(), L" different size");
			Assert::AreEqual(t_actual, t_exprcted);
		}
	};
}
