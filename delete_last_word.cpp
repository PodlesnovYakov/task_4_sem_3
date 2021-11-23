#include "pch.h"
#include "CppUnitTest.h"
#include "../task_4_sem_3/task_4_sem_3.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace deletelastword
{
	TEST_CLASS(deletelastword)
	{
	public:
		
		TEST_METHOD(just_string)
		{
			string t_input = "df dfgdfg df asd df";
			
			string t_actual = del_word_last(t_input);
			
			string t_exprcted = "dfgdfg asd";
			//Assert::AreEqual(t_actual.size(), t_exprcted.size(), L" different size");
			Assert::AreEqual(t_actual, t_exprcted);
		}
		TEST_METHOD(string_one_element)
		{
			string t_input = "a";
			string t_actual = del_word_last(t_input);
			string t_exprcted = "";
			//Assert::AreEqual(t_actual.size(), t_exprcted.size(), L" different size");
			Assert::AreEqual(t_actual, t_exprcted);
		}
		TEST_METHOD(string_empty)
		{
			string t_input = "";
			string t_actual = del_word_last(t_input);
			string t_exprcted = "";
			//Assert::AreEqual(t_actual.size(), t_exprcted.size(), L" different size");
			Assert::AreEqual(t_actual, t_exprcted);
		}
		
		TEST_METHOD(string_many_one_elements)
		{
			string t_input = "a a a a";
			string t_actual = del_word_last(t_input);
			string t_exprcted = "";
			//Assert::AreEqual(t_actual.size(), t_exprcted.size(), L" different size");
			Assert::AreEqual(t_actual, t_exprcted);
		}
	};
}
