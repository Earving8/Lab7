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
    printResult(test03());
    printResult(test04());
    printResult(test05());
    printResult(test06());
    printResult(test07());
    printResult(test08());
}


bool Test::test01(){
    LinkedListOfInts list;
    cout << "Test 1: isEmpty() returns true with an empty list";
    return(list.isEmpty());
}

bool Test::test02(){
    LinkedListOfInts list;
    list.addFront(1);
    cout << "Test 2: isEmpty() returns false with a nonempty list";
    return(!list.isEmpty());
}

bool Test::test03(){
    cout << "Test 3: size() returns 0 when empty list";
    LinkedListOfInts list;
    return(list.size() == 0);
}

bool Test::test04(){
    cout << "Test 4: size() returns 1 when list of 1 int";
    LinkedListOfInts list;
    list.addFront(2);
    return(list.size() == 1);
}

bool Test::test05(){
    cout << "Test 5: use addFront() once to empty list and check that it is at front of list";
    LinkedListOfInts list;
    list.addFront(3);
    return(list.toVector().front() == 3);
}

bool Test::test06(){
    cout << "Test 6: use addFront() twice to empty list and check that the second is at front of list";
    LinkedListOfInts list;
    list.addFront(3);
    list.addFront(4);
    return(list.toVector().front() == 4);
}

bool Test::test07(){
    cout << "Test 7: use addBack() once to empty list and check that it is at back of array";
    LinkedListOfInts list;
    list.addBack(5);
    return(list.toVector().back() == 5);
}

bool Test::test08(){
    cout << "Test 8: use addBack() twice to empty list and check that the second is at back of array";
    LinkedListOfInts list;
    list.addBack(5);
    list.addBack(6);
    return(list.toVector().back() == 6);
}
bool Test::test09(){
    return true;
}
bool Test::test10(){
    return true;
}
bool Test::test11(){
    return true;
}
bool Test::test12(){
    return true;
}

void Test::printResult(bool success){
    if(success){
        cout << " --Passed\n";
    }else{
        cout << " --Failed\n";
    }
}
