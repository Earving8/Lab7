/**
*	@file Test.h
*	@author Earving
*	@date 4/24/19
*	@brief A header for Test Class
*/

#ifndef TEST_H
#define TEST_H

#include "LinkedListOfInts.h"

class Test {
private:

    

    bool test01(); // isEmpty() on empty list returns true
    bool test02(); // isEmpty() returns false after addFront()
    bool test03(); // isEmpty() returns false after addBack()
    bool test04(); // size() returns 0 when empty list
    bool test05(); // size() returns correctly after 1 addFront()
    bool test06(); // size() returns correctly after 1 addBack()
    bool test07(); // size() returns correctly after multiple addFront()
    bool test08(); // size() returns correctly after multiple addBack()
    bool test09(); // addFront() properly adds to empty list
    bool test10(); // addBack() properly adds to empty list
    bool test11(); // nth addFront() properly adds to front of list
    bool test12(); // nth addBack() properly adds to the back of the list
    bool test13(); // removeFront() returns false on empty list
    bool test14(); // removeBack() returns false on empty list
    bool test15(); // removeFront() returns true removing from 1 element list
    bool test16(); // removeBack() returns true removing from 1 element list
    bool test17(); // removeFront() returns true removing from multiple element list
    bool test18(); // removeBack() returns true removing from multiple element list
    bool test19(); // isEmpty() returns true after removeFront() from 1 element list
    bool test20(); // isEmpty() returns true after removeBack() from 1 element list
    bool test21(); // size() returns correctly after removeFront() on empty list
    bool test22(); // size() returns correctly after removeBack() on empty list
    bool test23(); // size() returns correctly after removeFront() on multiple element list
    bool test24(); // size() returns correctly after removeBack() on multiple element list
    bool test25(); // search() returns true when element is in list
    bool test26(); // search() returns true when element is at beginning of list
    bool test27(); // search() returns true when element is at end of list
    bool test28(); // search() returns false when element is not list
    bool test29(); // search() returns false when list is empty

    

    /**
    * @brief outputs passed or failed to console
    **/
    void printResult(bool success);


public:
    Test();
    void runTests();
};

#endif
