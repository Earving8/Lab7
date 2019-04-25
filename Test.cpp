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
    printResult(test01());
    printResult(test02());
}


bool Test::test01(){
    LinkedListOfInts list;
    cout << "Test #1: isEmpty() returns true with an empty list     ";
    return(list.isEmpty());
}

bool Test::test02(){
    LinkedListOfInts list;
    list.addFront(1);
    cout << "Test #2: isEmpty() returns false with a nonempty list     ";
    return(!list.isEmpty());
}

void Test::printResult(bool success){
    if(success){
        cout << "Passed\n";
    }else{
        cout << "Failed\n";
    }
}
