/**
*	@file Test.hpp
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
        void test01();

        /**
         * @brief Creates an empty list adds 1 value, verifies isEmpty() returns false
         **/
        void test02();


public:
    Test();
    void runTests();
};

#endif
