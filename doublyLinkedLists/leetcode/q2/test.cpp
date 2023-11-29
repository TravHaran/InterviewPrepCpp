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

    // Test: Reverse Single Node
    {
        cout << "\n----- Test: Reverse Single Node -----\n";
        DoublyLinkedList list(1);
        cout << "DLL before reversing:\n";
        list.printList();
        list.reverse();
        cout << "DLL after reversing:\n";
        list.printList();
        int headValue = list.getHead()->value;
        int tailValue = list.getTail()->value;
        cout << "Head value after reversing: " << headValue << " - EXPECTED: 1\n";
        cout << "Tail value after reversing: " << tailValue << " - EXPECTED: 1\n";
        cout << ((headValue == 1 && tailValue == 1) ? "PASS\n" : "FAIL\n");
    }

    // Test: Reverse Two Nodes
    {
        cout << "\n----- Test: Reverse Two Nodes -----\n";
        DoublyLinkedList list(1);
        list.append(2);
        cout << "DLL before reversing:\n";
        list.printList();
        list.reverse();
        cout << "DLL after reversing:\n";
        list.printList();
        int headValue = list.getHead()->value;
        int tailValue = list.getTail()->value;
        cout << "Head value after reversing: " << headValue << " - EXPECTED: 2\n";
        cout << "Tail value after reversing: " << tailValue << " - EXPECTED: 1\n";
        cout << ((headValue == 2 && tailValue == 1) ? "PASS\n" : "FAIL\n");
    }

    // Test: Reverse Multiple Nodes
    {
        cout << "\n----- Test: Reverse Multiple Nodes -----\n";
        DoublyLinkedList list(1);
        list.append(2);
        list.append(3);
        list.append(4);
        cout << "DLL before reversing:\n";
        list.printList();
        list.reverse();
        cout << "DLL after reversing:\n";
        list.printList();
        int headValue = list.getHead()->value;
        int tailValue = list.getTail()->value;
        int headNextValue = list.getHead()->next->value;
        int tailPrevValue = list.getTail()->prev->value;
        cout << "Head value after reversing: " << headValue << " - EXPECTED: 4\n";
        cout << "Tail value after reversing: " << tailValue << " - EXPECTED: 1\n";
        cout << "Value after head after reversing: " << headNextValue << " - EXPECTED: 3\n";
        cout << "Value before tail after reversing: " << tailPrevValue << " - EXPECTED: 2\n";
        bool pass = headValue == 4 && tailValue == 1 && headNextValue == 3 && tailPrevValue == 2;
        cout << (pass ? "PASS\n" : "FAIL\n");
    }
    
}

int main(){
    test();
}