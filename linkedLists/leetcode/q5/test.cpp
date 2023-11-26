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
    // Helper function for pass/fail
    auto checkTestResult = [](bool condition) {
        cout << (condition ? "PASS" : "FAIL") << endl;
    };

    // Test: RemoveDuplicatesEmptyList
    {
        cout << "\n------ Test: RemoveDuplicatesEmptyList ------\n";
        
        LinkedList list(1);
        list.makeEmpty();
        
        cout << "BEFORE:    ";
        list.printList();
        
        list.removeDuplicates();
        
        cout << "AFTER:     ";
        list.printList();
        
        Node* head = list.getHead();
        checkTestResult(head == nullptr);
    }

    // Test: RemoveDuplicatesSingleElement
    {
        cout << "\n------ Test: RemoveDuplicatesSingleElement ------\n";
        
        LinkedList list(1);
        
        cout << "BEFORE:    ";
        list.printList();
        
        list.removeDuplicates();
        
        cout << "AFTER:     ";
        list.printList();
        
        Node* head = list.getHead();
        checkTestResult(head && head->value == 1);
    }

    // Test: RemoveDuplicatesNoDuplicates
    {
        cout << "\n------ Test: RemoveDuplicatesNoDuplicates ------\n";
        
        LinkedList list(1);
        list.append(2);
        list.append(3);
        
        cout << "BEFORE:    ";
        list.printList();
        
        list.removeDuplicates();
        
        cout << "AFTER:     ";
        list.printList();
        
        Node* head = list.getHead();
        checkTestResult(head && head->value == 1);
    }

    // Test: RemoveDuplicatesHasDuplicates
    {
        cout << "\n------ Test: RemoveDuplicatesHasDuplicates ------\n";
        
        LinkedList list(1);
        list.append(2);
        list.append(2);
        list.append(3);
        
        cout << "BEFORE:    ";
        list.printList();
        
        list.removeDuplicates();
        
        cout << "AFTER:     ";
        list.printList();
        
        // Check for duplicates
        Node* current = list.getHead();
        bool noDuplicates = true;
        
        while (current && current->next) {
            if (current->value == current->next->value) {
                noDuplicates = false;
                break;
            }
            current = current->next;
        }
        
        checkTestResult(noDuplicates);
    }
    
}

int main(){
    test();
}