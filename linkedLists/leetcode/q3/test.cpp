#include <iostream>
#include "LinkedList.cpp"

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
    // Function to convert nullptr to string for easy comparison
    auto ptrToNum = [](Node* ptr) -> string {
        return (ptr == nullptr) ? "nullptr" : to_string(ptr->value);
    };

    // Helper function to check test result
    auto checkTestResult = [](bool condition) {
        cout << (condition ? "PASS" : "FAIL") << endl;
    };

    // Test: EmptyList
    {
        cout << "\n------ LinkedList Test: EmptyList ------\n";
        
        LinkedList list(1);
        list.makeEmpty();
        
        list.printList();
        
        Node* result = list.findKthFromEnd(1);
        
        cout << "Kth from end: " << ptrToNum(result) << endl;
        
        checkTestResult(result == nullptr);
    }

    // Test: KGreaterThanListLength
    {
        cout << "\n------ LinkedList Test: KGreaterThanListLength ------\n";
        
        LinkedList list(1);
        list.append(2);
        
        list.printList();
        
        Node* result = list.findKthFromEnd(3);
        
        cout << "Kth from end: " << ptrToNum(result) << endl;
        
        checkTestResult(result == nullptr);
    }

    // Test: KEqualsListLength
    {
        cout << "\n------ LinkedList Test: KEqualsListLength ------\n";
        
        LinkedList list(1);
        list.append(2);
        list.append(3);
        
        list.printList();
        
        Node* result = list.findKthFromEnd(3);
        
        cout << "Kth from end: " << ptrToNum(result) << endl;
        
        checkTestResult(result && result->value == 1);
    }

    // Test: KLessThanListLength
    {
        cout << "\n------ LinkedList Test: KSecondFromEnd ------\n";
        
        LinkedList list(1);
        list.append(2);
        list.append(3);
        list.append(4);
        list.append(5);
        
        list.printList();
        
        Node* result = list.findKthFromEnd(2);
        
        cout << "Kth from end: " << ptrToNum(result) << endl;
        
        checkTestResult(result && result->value == 4);
    }
    
}

int main(){
    test();
}