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
    printResult(test09());
    printResult(test10());
    printResult(test11());
    printResult(test12());
    printResult(test13());
    printResult(test14());
    printResult(test15());
    printResult(test16());
    printResult(test17());
    printResult(test18());
    printResult(test19());
    printResult(test20());
    printResult(test21());
    printResult(test22());
    printResult(test23());
    printResult(test24());
    printResult(test25());
    printResult(test26());
    printResult(test27());
    printResult(test28());
}


bool Test::test01(){
    LinkedListOfInts list;
    cout << "Test 1: isEmpty() on empty list returns true";
    return(list.isEmpty());
}

bool Test::test02(){
    LinkedListOfInts list;
    list.addFront(1);
    cout << "Test 2: isEmpty() returns false after addFront()";
    return(!list.isEmpty());
}

bool Test::test03(){
    cout << "Test 3: ";
    return true;
}

bool Test::test04(){
    cout << "Test 4: size() returns 0 when empty list";
    LinkedListOfInts list;
    return(list.size() == 0);
}

bool Test::test05(){
    cout << "Test 5: size() returns correctly after 1 addFront()";
    LinkedListOfInts list;
    list.addFront(2);
    return(list.size() == 1);
}

bool Test::test06(){
    cout << "Test 6: ";
    return true;
}

bool Test::test07(){
    cout << "Test 7: ";
    return true;
}

bool Test::test08(){
    cout << "Test 8: ";
    return true;
}

bool Test::test09(){
    cout << "Test 9: addFront() properly adds to empty list";
    LinkedListOfInts list;
    list.addFront(3);
    return(list.toVector().front() == 3);
}


bool Test::test10(){
    cout << "Test 10: addBack() properly adds to empty list";
    LinkedListOfInts list;
    list.addBack(5);
    return(list.toVector().back() == 5);
}

bool Test::test11(){
    cout << "Test 11: nth addFront() properly adds to front of list";
    LinkedListOfInts list;
    list.addFront(3);
    list.addFront(4);
    return(list.toVector().front() == 4);
}

bool Test::test12(){
    cout << "Test 12: nth addBack() properly adds to the back of the list";
    LinkedListOfInts list;
    list.addBack(5);
    list.addBack(6);
    return(list.toVector().back() == 6);
}

bool Test::test13(){
    cout << "Test 13: ";
    return true;
}

bool Test::test14(){
    cout << "Test 14: ";
    return true;
}

bool Test::test15(){
    cout << "Test 15: ";
    return true;
}

bool Test::test16(){
    cout << "Test 16: ";
    return true;
}

bool Test::test17(){
    cout << "Test 17: ";
    return true;
}

bool Test::test18(){
    cout << "Test 18: ";
    return true;
}

bool Test::test19(){
    cout << "Test 19: ";
    return true;
}

bool Test::test20(){
    cout << "Test 20: ";
    return true;
}

bool Test::test21(){
    cout << "Test 21: ";
    return true;
}

bool Test::test22(){
    cout << "Test 22: ";
    return true;
}

bool Test::test23(){
    cout << "Test 23: ";
    return true;
}

bool Test::test24(){
    cout << "Test 24: ";
    return true;
}

bool Test::test25(){
    cout << "Test 25: ";
    return true;
}

bool Test::test26(){
    cout << "Test 26: ";
    return true;
}

bool Test::test27(){
    cout << "Test 27: ";
    return true;
}

bool Test::test28(){
    cout << "Test 28: ";
    return true;
}


void Test::printResult(bool success){
    if(success){
        cout << " --Passed\n";
    }else{
        cout << " --Failed\n";
    }
}
