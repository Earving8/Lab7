/**
*	@file Test.cpp
*	@author Earving Morales
*	@date 4/24/19
*	@brief tests linked list
*/

#include "LinkedListOfInts.h"
#include "Test.h"
#include <iostream>

using namespace std;

Test::Test(){

}

void Test::runTests(){
    test01();
    test02();
}


void Test::test01(){
    LinkedListOfInts list;
    cout << "Test #1: isEmpty() returns true with an empty list     ";
    if(list.isEmpty()){
        cout << "PASSED\n";
    }else{
        cout << "FAILED\n";
    }
}

void Test::test02(){
    LinkedListOfInts list;
    list.addFront(1);
    cout << "Test #2: isEmpty() returns false with a filled list     ";
    if(list.isEmpty()){
        cout << "FAILED\n";
    }else{
        cout << "PASSED\n";
    }
}
