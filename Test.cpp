#include "Test.h"


Test::Test()
{

}


void Test::all_tests()
{
	cout << "The test_construct_LinkedList() Test: ";
	if (test_construct_LinkedList() == true)
	{
		cout << "Pass!\n";
	}
	else
	{
		cout << "Bug!\n";
	}
	cout << "The test_deconstruct_LinkedList() Test: ";
	if (test_deconstruct_LinkedList() == true)
	{
		cout << "Pass!\n";
	}
	else
	{
		cout << "Bug!\n";
	}
	cout << "The test_size() Test: ";
	if(test_size() == true)
	{
		cout << "Pass!\n";
	}
	else
	{
		cout << "Bug!\n";
	}
	cout << "The isEmpty() Test: ";
	if (test_isEmpty() == true)
	{
		cout << "Pass!\n";
	}
	else
	{
		cout << "Bug!\n";
	}
	cout << "The test_search_value_present() Test: ";
	if (test_search_value_present() == true)
	{
		cout << "Pass!\n";
	}
	else
	{
		cout << "Bug!\n";
	}
	cout << "The test_search_value_absent() Test: ";
	if (test_search_value_absent() == true)
	{
		cout << "Pass!\n";
	}
	else
	{
		cout << "Bug!\n";
	}
	cout << "The test_addback() Test: ";
	if (test_addback() == true)
	{
		cout << "Pass!\n";
	}
	else
	{
		cout << "Bug!\n";
	}
	cout << "The test_addfront() Test: ";
	if (test_addfront() == true)
	{
		cout << "Pass!\n";
	}
	else
	{
		cout << "Bug!\n";
	}
	cout << "The test_removefront() Test: ";
	if (test_removefront() == true)
	{
		cout << "Pass!\n";
	}
	else
	{
		cout << "Bug!\n";
	}
	cout << "The test_removeback() Test: ";
	if (test_removeback() == true)
	{
		cout << "Pass!\n";
	}
	else
	{
		cout << "Bug!\n";
	}
}

bool Test::test_construct_LinkedList()
{
	LinkedList<int>* a = new LinkedList<int>();
	vector<int> b = a->toVector();
	if (b.size() == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Test::test_deconstruct_LinkedList()
{
	LinkedList<int>* a = new LinkedList<int>();
	a->addFront(1);
	a->addFront(2);
	a->addFront(3);
	a->~LinkedList();
	vector<int> b = a->toVector();
	if (b.size() == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Test::test_size()
{
	LinkedList<int>* a=new LinkedList<int>();
	a->addFront(2);
	if (a->size() == 1)
	{
		
		return true;
	}
	else
	{

		return false;
	}
	
}

bool Test::test_isEmpty()
{
	LinkedList<int>* a = new LinkedList<int>();
	
	if (a->isEmpty())
	{

		return true;
	}
	else
	{

		return false;
	}

}

bool Test::test_search_value_present()
{
	LinkedList<int>* a = new LinkedList<int>();
	a->addFront(5);
	if (a->search(5))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Test::test_search_value_absent()
{
	LinkedList<int>* a = new LinkedList<int>();
	a->addFront(5);
	a->addFront(4);
	a->addFront(3);
	a->addFront(1);
	if (a->search(2))
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool Test::test_addback()
{
	LinkedList<int>* a = new LinkedList<int>();
	a->addBack(1);
	a->addBack(2);
	a->addBack(3);
	vector<int> b = a->toVector();
	int i = 0;
	while (i < b.size() - 1)
	{
		i++;
	}
	if (b[i] == 3)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Test::test_addfront()
{
	LinkedList<int>* a = new LinkedList<int>();
	a->addFront(1);
	a->addFront(2);
	a->addFront(3);
	vector<int> b=a->toVector();
	
	if (b[0] == 3)
	{

		return true;
	}
	else
	{

		return false;
	}

}

bool Test::test_removefront()
{
	LinkedList<int>* a = new LinkedList<int>();
	a->addFront(1);
	a->addFront(2);
	a->addFront(3);
	a->removeFront();

	vector<int> b = a->toVector();
	
	if (b[0] == 2)
	{

		return true;
	}
	else
	{

		return false;
	}

}

bool Test::test_removeback()
{
	LinkedList<int>* a = new LinkedList<int>();
	a->addFront(0);
	a->addFront(1);
	a->addFront(2);
	a->addFront(3);
	a->removeBack();
	a->removeBack();
	vector<int> b = a->toVector();
	int i = 0;
	while (i < b.size() - 1)
	{
		i++;
	}

	if (b[i] == 2)
	{
		
		return true;
	}
	else
	{
		return false;
	}

}
