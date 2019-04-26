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
    printResult(test29());
}


bool Test::test01(){
    cout << "Test 1: isEmpty() on empty list returns true";
    LinkedListOfInts list;
    return(list.isEmpty() == true);
}

bool Test::test02(){
    cout << "Test 2: isEmpty() returns false after addFront()";
    LinkedListOfInts list;
    list.addFront(1);
    return(list.isEmpty() == false);
}

bool Test::test03(){
    cout << "Test 3: isEmpty() returns false after addBack()";
    LinkedListOfInts list;
    list.addBack(2);
    return(list.isEmpty() == false);
}

bool Test::test04(){
    cout << "Test 4: size() returns 0 when empty list";
    LinkedListOfInts list;
    return(list.size() == 0);
}

bool Test::test05(){
    cout << "Test 5: size() returns correctly after 1 addFront()";
    LinkedListOfInts list;
    list.addFront(3);
    return(list.size() == 1);
}

bool Test::test06(){
    cout << "Test 6: size() returns correctly after 1 addBack()";
    LinkedListOfInts list;
    list.addBack(4);
    return(list.size() == 1);
}

bool Test::test07(){
    cout << "Test 7: size() returns correctly after multiple addFront()";
    LinkedListOfInts list;
    list.addFront(5);
    list.addFront(6);
    list.addFront(7);
    list.addFront(8);
    return(list.size() == 4);
}

bool Test::test08(){
    cout << "Test 8: size() returns correctly after multiple addBack()";
    LinkedListOfInts list;
    list.addBack(9);
    list.addBack(10);
    list.addBack(11);
    list.addBack(12);
    return(list.size() == 4);
}

bool Test::test09(){
    cout << "Test 9: addFront() properly adds to empty list";
    LinkedListOfInts list;
    list.addFront(13);
    return(list.toVector().front() == 13);
}


bool Test::test10(){
    cout << "Test 10: addBack() properly adds to empty list";
    LinkedListOfInts list;
    list.addBack(14);
    return(list.toVector().back() == 14);
}

bool Test::test11(){
    cout << "Test 11: nth addFront() properly adds to front of list";
    LinkedListOfInts list;
    list.addFront(15);
    list.addFront(16);
    list.addFront(17);
    list.addFront(18);
    return(list.toVector().front() == 18);
}

bool Test::test12(){
    cout << "Test 12: nth addBack() properly adds to the back of the list";
    LinkedListOfInts list;
    list.addBack(19);
    list.addBack(20);
    list.addBack(21);
    return(list.toVector().back() == 21);
}

bool Test::test13(){
    cout << "Test 13: removeFront() returns false on empty list";
    LinkedListOfInts list;
    return(list.removeFront() == false);
}

bool Test::test14(){
    cout << "Test 14: removeBack() returns false on empty list";
    LinkedListOfInts list;
    return(list.removeBack() == false);
}

bool Test::test15(){
    cout << "Test 15: removeFront() returns true removing from 1 element list";
    LinkedListOfInts list;
    list.addFront(22);
    return(list.removeFront() == true);
}

bool Test::test16(){
    cout << "Test 16: removeBack() returns true removing from 1 element list";
    LinkedListOfInts list;
    list.addFront(23);
    return(list.removeBack() == true);
}

bool Test::test17(){
    cout << "Test 17: removeFront() returns true removing from multiple element list";
    LinkedListOfInts list;
    list.addFront(24);
    list.addFront(25);
    list.addFront(26);
    return(list.removeFront() == true);
}

bool Test::test18(){
    cout << "Test 18: removeBack() returns true removing from multiple element list";
    LinkedListOfInts list;
    list.addFront(27);
    list.addFront(28);
    list.addFront(29);
    list.addFront(30);
    return(list.removeBack() == true);
}

bool Test::test19(){
    cout << "Test 19: isEmpty() returns true after removeFront() from 1 element list";
    LinkedListOfInts list;
    list.addFront(31);
    list.removeFront();
    return(list.isEmpty() == true);
}

bool Test::test20(){
    cout << "Test 20: isEmpty() returns true after removeBack() from 1 element list";
    LinkedListOfInts list;
    list.addFront(31);
    list.removeBack();
    return(list.isEmpty() == true);
}

bool Test::test21(){
    cout << "Test 21: size() returns correctly after removeFront() on empty list";
    LinkedListOfInts list;
    list.addFront(32);
    list.removeFront();
    return(list.size() == 0);
}

bool Test::test22(){
    cout << "Test 22: size() returns correctly after removeBack() on empty list";
    LinkedListOfInts list;
    list.addFront(33);
    list.removeBack();
    return(list.size() == 0);
}

bool Test::test23(){
    cout << "Test 23: size() returns correctly after removeFront() on multiple element list";
    LinkedListOfInts list;
    list.addFront(34);
    list.addFront(35);
    list.addFront(36);
    list.addFront(37);
    list.addFront(38);
    list.removeFront();
    return(list.size() == 4);
}

bool Test::test24(){
    cout << "Test 24: size() returns correctly after removeBack() on multiple element list";
    LinkedListOfInts list;
    list.addFront(39);
    list.addFront(40);
    list.addFront(41);
    list.removeBack();
    return(list.size() == 2);
}

bool Test::test25(){
    cout << "Test 25: search() returns true when element is in list";
    LinkedListOfInts list;
    list.addFront(42);
    list.addFront(43);
    list.addFront(44);
    list.addFront(45);
    return(list.search(44) == true);
}

bool Test::test26(){
    cout << "Test 26: search() returns true when element is at beginning of list";
    LinkedListOfInts list;
    list.addFront(46);
    list.addFront(47);
    list.addFront(48);
    list.addFront(49);
    return(list.search(46) == true);
}

bool Test::test27(){
    cout << "Test 27: search() returns true when element is at end of list";
    LinkedListOfInts list;
    list.addFront(47);
    list.addFront(48);
    list.addFront(49);
    list.addFront(50);
    return(list.search(50) == true);
}

bool Test::test28(){
    cout << "Test 28: search() returns false when element is not list";
    LinkedListOfInts list;
    list.addFront(51);
    list.addFront(52);
    list.addFront(53);
    list.addFront(54);
    return(list.search(50) == false);
}

bool Test::test29(){
    cout << "Test 29: search() returns false when list is empty";
    LinkedListOfInts list;
    return(list.search(12) == false);
}


void Test::printResult(bool success){
    if(success){
        cout << " --Passed\n";
    }else{
        cout << " --Failed\n";
    }
}
