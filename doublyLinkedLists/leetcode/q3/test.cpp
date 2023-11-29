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

    // Test: Is Palindrome with Single Node
    {
        cout << "\n----- Test: Is Palindrome with Single Node -----\n";
        DoublyLinkedList list(1);
        cout << "DLL:\n";
        list.printList();
        bool result = list.isPalindrome();
        cout << "Is Palindrome: " << (result ? "true" : "false") << " - EXPECTED: true\n";
        cout << (result ? "PASS\n" : "FAIL\n");
    }

    // Test: Is Palindrome with Two Nodes
    {
        cout << "\n----- Test: Is Palindrome with Two Nodes -----\n";

        DoublyLinkedList list(1);
        list.append(1);
        cout << "DLL (equal values):\n";
        list.printList();
        bool result1 = list.isPalindrome();
        cout << "Is Palindrome: " << (result1 ? "true" : "false") << " - EXPECTED: true\n";
        cout << (result1 ? "PASS\n" : "FAIL\n");

        DoublyLinkedList list2(1);
        list2.append(2);
        cout << "\nDLL (different values):\n";
        list2.printList();
        bool result2 = list2.isPalindrome();
        cout << "Is Palindrome: " << (result2 ? "true" : "false") << " - EXPECTED: false\n";
        cout << (result2 ? "FAIL\n" : "PASS\n");
    }

    // Test: Is Palindrome with Multiple Nodes
    {
        cout << "\n----- Test: Is Palindrome with Multiple Nodes -----\n";

        DoublyLinkedList list(1);
        list.append(2);
        list.append(3);
        list.append(2);
        list.append(1);
        cout << "DLL (palindrome):\n";
        list.printList();
        bool result1 = list.isPalindrome();
        cout << "Is Palindrome: " << (result1 ? "true" : "false") << " - EXPECTED: true\n";
        cout << (result1 ? "PASS\n" : "FAIL\n");

        DoublyLinkedList list2(1);
        list2.append(2);
        list2.append(3);
        list2.append(3);
        list2.append(2);
        cout << "\nDLL (not palindrome):\n";
        list2.printList();
        bool result2 = list2.isPalindrome();
        cout << "Is Palindrome: " << (result2 ? "true" : "false") << " - EXPECTED: false\n";
        cout << (result2 ? "FAIL\n" : "PASS\n");
    }
    
}

int main(){
    test();
}