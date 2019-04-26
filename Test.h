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

    /**
     * @brief Creates an empty list and verifies isEmpty() returns true
     **/
    bool test01();

    /**
     * @brief Creates an empty list adds 1 value, verifies isEmpty() returns false
     **/
    bool test02();

    /**
     * @brief size() returns 0 when empty list
     **/
    bool test03();

    /**
     * @brief size() returns 1 when list of 1 int
     **/
    bool test04();

    /**
     * @brief use addFront once to empty list and check that it is at front of array
     **/
    bool test05();
    
    /**
     * @brief use addFront twice to empty list and check that the second is at front of array
     **/
    bool test06();
    
    /**
     * @brief use addBack once to empty list and check that it is at back of array
     **/
    bool test07();
    
    /**
     * @brief use addBack twice to empty list and check that the second is at back of array
     **/
    bool test08();
    
    /**
     * @brief use addFront once to empty list and check that it is at front of array
     **/
    bool test09();
    
    /**
     * @brief
     **/
    bool test10();
    
    /**
     * @brief
     **/
    bool test11();
    
    /**
     * @brief
     **/
    bool test12();

    /**
    * @brief outputs passed or failed to console
    **/
    void printResult(bool success);


public:
    Test();
    void runTests();
};

#endif
