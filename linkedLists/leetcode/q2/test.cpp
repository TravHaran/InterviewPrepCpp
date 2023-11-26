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
    // Function to convert boolean to string for easy comparison
    auto boolToStr = [](bool val) -> string {
        return val ? "True" : "False";
    };

    // Helper function to check test result
    auto checkTestResult = [](bool condition) {
        cout << (condition ? "PASS" : "FAIL") << endl;
    };

    // Test: EmptyListHasLoop
    {
        cout << "\n------ LinkedList Test: EmptyListHasLoop ------\n";
        
        LinkedList list(1);
        list.makeEmpty();
        
        list.printList();
        
        bool hasLoop = list.hasLoop();
        
        cout << "Has loop: " << boolToStr(hasLoop) << endl;
        
        checkTestResult(!hasLoop);
    }

    // Test: SingleElementNoLoop
    {
        cout << "\n------ LinkedList Test: SingleElementNoLoop ------\n";
        
        LinkedList list(1);
        
        list.printList();
        
        bool hasLoop = list.hasLoop();
        
        cout << "Has loop: " << boolToStr(hasLoop) << endl;
        
        checkTestResult(!hasLoop);
    }

    // Test: MultipleElementsNoLoop
    {
        cout << "\n------ LinkedList Test: MultipleElementsNoLoop ------\n";
        
        LinkedList list(1);
        list.append(2);
        list.append(3);
        list.append(4);
        
        list.printList();
        
        bool hasLoop = list.hasLoop();
        
        cout << "Has loop: " << boolToStr(hasLoop) << endl;
        
        checkTestResult(!hasLoop);
    }

    // Test: SingleElementWithLoop
    {
        cout << "\n------ LinkedList Test: SingleElementWithLoop ------\n";
        
        LinkedList list(1);
        Node* tail = list.getTail();
        tail->next = list.getHead();
        
        // Can't print the list because it has a loop!
        
        bool hasLoop = list.hasLoop();
        
        cout << "Has loop: " << boolToStr(hasLoop) << endl;
        
        tail->next = nullptr;  // Break the loop
        
        checkTestResult(hasLoop);
    }

    // Test: MultipleElementsWithLoop
    {
        cout << "\n------ LinkedList Test: MultipleElementsWithLoop ------\n";
        
        LinkedList list(1);
        list.append(2);
        list.append(3);
        list.append(4);
        Node* tail = list.getTail();
        tail->next = list.getHead();
        
        // Can't print the list because it has a loop!
        
        bool hasLoop = list.hasLoop();
        
        cout << "Has loop: " << boolToStr(hasLoop) << endl;
        
        tail->next = nullptr;  // Break the loop
        
        checkTestResult(hasLoop);
    }
    
}

int main(){
    test();
}
