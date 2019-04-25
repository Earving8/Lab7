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
        bool test01();

        /**
         * @brief Creates an empty list adds 1 value, verifies isEmpty() returns false
         **/
        bool test02();

        /**
        * @brief outputs passed or failed to console
        **/
        void printResult(bool success);


public:
    Test();
    void runTests();
};

#endif
