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
    // Function to convert nullptr to "0 (nullptr)"
    auto ptrToNum = [](Node* ptr) -> string {
        return (ptr == nullptr) ? "0 (nullptr)" : to_string(ptr->value);
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
        
        Node* middle = list.findMiddleNode();
        
        cout << "Middle node: " << ptrToNum(middle) << endl;
        
        checkTestResult(middle == nullptr);
    }

    // Test: SingleElement
    {
        cout << "\n------ LinkedList Test: SingleElement ------\n";
        
        LinkedList list(1);
        
        list.printList();
        
        Node* middle = list.findMiddleNode();
        
        cout << "Middle node: " << ptrToNum(middle) << endl;

        checkTestResult(middle == list.getHead());
    }

    // Test: EvenNumberOfElements
    {
        cout << "\n------ LinkedList Test: EvenNumberOfElements ------\n";
        
        LinkedList list(1);
        list.append(2);
        list.append(3);
        list.append(4);
        
        list.printList();
        
        Node* middle = list.findMiddleNode();
        
        cout << "Middle node: " << ptrToNum(middle) << endl;

        checkTestResult(middle->value == 3);
    }

    // Test: OddNumberOfElements
    {
        cout << "\n------ LinkedList Test: OddNumberOfElements ------\n";
        
        LinkedList list(1);
        list.append(2);
        list.append(3);
        
        list.printList();
        
        Node* middle = list.findMiddleNode();
        
        cout << "Middle node: " << ptrToNum(middle) << endl;
        
        checkTestResult(middle->value == 2);
    }
}

int main(){
    test();
}