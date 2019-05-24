#include "stdafx.h"
#include "CppUnitTest.h"
#include "c:\Users\Андрей\Desktop\Lab2_Map_RBTree\Lab2_Map_RBTree\RBTree.h"
#include"C:\Users\Андрей\Desktop\Lab2_Map_RBTree\Lab2_Map_RBTree\List.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	private:
		Map<int, int>MapInt;
		Map<char, char>MapCh;
	public:
		//insert tests
		TEST_METHOD(InsertIntIntSize)
		{
			MapInt.insert(2, 9);
			MapInt.insert(5, 5);
			MapInt.insert(1, 89);
			Assert::AreEqual(3, MapInt.get_size());
		}
		TEST_METHOD(InsertChChSize)
		{
			MapCh.insert('b', 'd');
			Assert::AreEqual(1, MapCh.get_size());
		}
		
		TEST_METHOD(RemoveIntIntSize)
		{
			MapInt.insert(2, 9);
			MapInt.insert(5, 5);
			MapInt.insert(1, 89);
			MapInt.insert(8, 2);
			MapInt.insert(10, 8);
			MapInt.remove(8);
			Assert::AreEqual(4, MapInt.get_size());
		}
		
		TEST_METHOD(RemoveChChNonexistentElementSize)
		{
			MapCh.insert('r', 'c');
			MapCh.insert('u', 'a');
			MapCh.insert('s', 't');
			MapCh.remove('x');
			Assert::AreEqual(3, MapCh.get_size());
		}
		
		TEST_METHOD(RemoveChChSize)
		{
			MapCh.insert('r', 'c');
			MapCh.insert('u', 'a');
			MapCh.insert('s', 't');
			MapCh.remove('s');
			Assert::AreEqual(2, MapCh.get_size());
		}
		//find tests
		TEST_METHOD(FindIntIntData)
		{
			MapInt.insert(8, 2);
			MapInt.insert(10, 8);
			Assert::AreEqual(2, MapInt.find(8)->data);
		}
		
		TEST_METHOD(ClearChChSize)
		{
			MapCh.insert('r', 'c');
			MapCh.insert('u', 'a');
			MapCh.insert('s', 't');
			MapCh.clear();
			Assert::AreEqual(0, MapCh.get_size());
		}
		
		TEST_METHOD(IntGetKeys)
		{
			int i=0;
			int array[5] = { 2,4,10,7,5 };
			MapInt.insert(5, 5);
			MapInt.insert(4, 65);
			MapInt.insert(7, 3);
			MapInt.insert(2, 2);
			MapInt.insert(10, 4);
			List<int>list=MapInt.get_keys();
			Node<int>*ptr = list.head;
			while (ptr)
			{
				Assert::AreEqual(ptr->data, array[i]);
				i++;
				ptr = ptr->next;
			}
			
		}

		TEST_METHOD(IntGetValues)
		{
			int i = 0;
			int array[5] = { 2,65,24,3,5 };
			MapInt.insert(5, 5);
			MapInt.insert(4, 65);
			MapInt.insert(7, 3);
			MapInt.insert(2, 2);
			MapInt.insert(10, 24);
			List<int>list = MapInt.get_values();
			Node<int>*ptr = list.head;
			while (ptr)
			{
				Assert::AreEqual(ptr->data, array[i]);
				i++;
				ptr = ptr->next;
			}
		}

	};
}