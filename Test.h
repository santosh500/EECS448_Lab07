/**
*	@author Paul Charles
*	@date 04-28-16
*	@brief A header file for templated Test class
*/


#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <vector>
#include "LinkedList.h"
using namespace std;

class Test
{
			public:

				/**
				*   @Constructor for the test class
				*/
				Test();
				/**
				*   @Suite to run all the tests from the main
				*/
				void all_tests();
				/**
				*   @Test that checks if the LinkedList.hpp constructor works
				*/
				bool test_construct_LinkedList();
				/**
				*   @Test that checks if the LinkedList.hpp deconstructor works
				*/
				bool test_deconstruct_LinkedList();
				/**
				*   @Test that checks if the size() function returns the correct size of the list
				*/
				bool test_size();
				/**
				*   @Test that checks if the isEmpty() function returns the correct status
				*/
				bool test_isEmpty();
				/**
				*   @Test that checks if the search() function finds the value when in the list
				*/
				bool test_search_value_present();
				/**
				*   @Test that checks if the search() function finds the value when in the list
				*/
				bool test_search_value_absent();
				/**
				*   @Test that checks if the addBack() function adds a value to the back of the list
				*/
				bool test_addback();
				/**
				*   @Test that checks if the addFront() function adds a value to the front of the list
				*/
				bool test_addfront();
				/**
				*   @Test that checks if the removeFront() function removes a value to the front of the list
				*/
				bool test_removefront();
				/**
				*   @Test that checks if the removeBack() function removes a value to the back of the list
				*/
				bool test_removeback();

			private:

};



#endif
