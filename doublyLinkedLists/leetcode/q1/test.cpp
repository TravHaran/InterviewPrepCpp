#include <iostream>
#include "DoublyLinkedList.cpp"

using namespace std;


//  +=====================================================+
//  |                                                     |
//  |          THE TEST CODE BELOW WILL PRINT             |
//  |              OUTPUT TO "USER LOGS"                  |
//  |                                                     |
//  |  Use the output to test and troubleshoot your code  |
//  |                                                     |
//  +=====================================================+


static void test() {

    // Test: Swap First and Last with Single Node
    {
        cout << "\n----- Test: Swap First and Last with Single Node -----\n";
        DoublyLinkedList list(1);
        cout << "DLL before swapping first and last:\n";
        list.printList();
        list.swapFirstLast();
        cout << "DLL after swapping first and last:\n";
        list.printList();
        int headValue = list.getHead()->value;
        int tailValue = list.getTail()->value;
        cout << "Head value after swapping: " << headValue << " - EXPECTED: 1\n";
        cout << "Tail value after swapping: " << tailValue << " - EXPECTED: 1\n";
        cout << ((headValue == 1 && tailValue == 1) ? "PASS\n" : "FAIL\n");
    }

    // Test: Swap First and Last with Two Nodes
    {
        cout << "\n----- Test: Swap First and Last with Two Nodes -----\n";
        DoublyLinkedList list(1);
        list.append(2);
        cout << "DLL before swapping first and last:\n";
        list.printList();
        list.swapFirstLast();
        cout << "DLL after swapping first and last:\n";
        list.printList();
        int headValue = list.getHead()->value;
        int tailValue = list.getTail()->value;
        cout << "Head value after swapping: " << headValue << " - EXPECTED: 2\n";
        cout << "Tail value after swapping: " << tailValue << " - EXPECTED: 1\n";
        cout << ((headValue == 2 && tailValue == 1) ? "PASS\n" : "FAIL\n");
    }

    // Test: Swap First and Last with Multiple Nodes
    {
        cout << "\n----- Test: Swap First and Last with Multiple Nodes -----\n";
        DoublyLinkedList list(1);
        list.append(2);
        list.append(3);
        list.append(4);
        cout << "DLL before swapping first and last:\n";
        list.printList();
        list.swapFirstLast();
        cout << "DLL after swapping first and last:\n";
        list.printList();
        int headValue = list.getHead()->value;
        int tailValue = list.getTail()->value;
        int headNextValue = list.getHead()->next->value;
        int tailPrevValue = list.getTail()->prev->value;
        cout << "Head value after swapping: " << headValue << " - EXPECTED: 4\n";
        cout << "Tail value after swapping: " << tailValue << " - EXPECTED: 1\n";
        cout << "Value after head after swapping: " << headNextValue << " - EXPECTED: 2\n";
        cout << "Value before tail after swapping: " << tailPrevValue << " - EXPECTED: 3\n";
        bool pass = headValue == 4 && tailValue == 1 && headNextValue == 2 && tailPrevValue == 3;
        cout << (pass ? "PASS\n" : "FAIL\n");
    }
    
}

int main(){
    test();
}