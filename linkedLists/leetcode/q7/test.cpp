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
    // Helper function to check pass/fail
    auto checkTestResult = [](bool condition) {
        cout << (condition ? "PASS" : "FAIL") << endl;
    };

    // Test: ReverseBetweenEmptyList
    {
        cout << "\n------ Test: ReverseBetweenEmptyList ------\n";
        cout << "reverseBetween( 0, 2 )\n";
        
        LinkedList list(1);
        list.makeEmpty();
        
        cout << "BEFORE:    ";
        list.printList();
        
        list.reverseBetween(0, 2);
        
        cout << "AFTER:     ";
        list.printList();
        
        checkTestResult(list.getLength() == 0);
    }

    // Test: ReverseBetweenSingleElement
    {
        cout << "\n------ Test: ReverseBetweenSingleElement ------\n";
        cout << "reverseBetween( 0, 0 )\n";
        
        LinkedList list(1);
        
        cout << "BEFORE:    ";
        list.printList();
        
        list.reverseBetween(0, 0);
        
        cout << "AFTER:     ";
        list.printList();
        
        Node* head = list.getHead();
        checkTestResult(head && head->value == 1);
    }

    // Test: ReverseBetweenBothArgumentsSameNumber
    {
        cout << "\n------ Test: ReverseBetweenBothArgumentsSameNumber ------\n";
        cout << "reverseBetween( 1, 1 )\n";
        
        LinkedList list(1);
        list.append(2);
        list.append(3);
        
        cout << "BEFORE:    ";
        list.printList();
        
        list.reverseBetween(1, 1);
        
        cout << "AFTER:     ";
        list.printList();
        
        Node* head = list.getHead();
        checkTestResult(
          head && 
          head->value == 1 && 
          head->next->value == 2 && 
          head->next->next->value == 3
        );
    }

    // Test: ReverseBetweenMultipleElements
    {
        cout << "\n------ Test: ReverseBetweenMultipleElements ------\n";
        cout << "reverseBetween( 1, 4 )\n";
        
        LinkedList list(1);
        list.append(2);
        list.append(3);
        list.append(4);
        list.append(5);
        list.append(6);
        
        cout << "BEFORE:    ";
        list.printList();
        
        list.reverseBetween(1, 4);
        
        cout << "AFTER:     ";
        list.printList();
        
        // Check condition
        Node* head = list.getHead();
        checkTestResult(
          head && 
          head->value == 1 &&
          head->next->value == 5 &&
          head->next->next->value == 4 &&
          head->next->next->next->value == 3 &&
          head->next->next->next->next->value == 2 && 
          head->next->next->next->next->next->value == 6
        );
    }

    // Test: ReverseBetweenStartAtZero
    {
        cout << "\n------ Test: ReverseBetweenStartAtZero ------\n";
        cout << "reverseBetween( 0, 2 )\n";
        
        LinkedList list(1);
        list.append(2);
        list.append(3);
        list.append(4);
        
        cout << "BEFORE:    ";
        list.printList();
        
        list.reverseBetween(0, 2);
        
        cout << "AFTER:     ";
        list.printList();
        
        // Check condition
        Node* head = list.getHead();
        checkTestResult(
          head && 
          head->value == 3 &&
          head->next->value == 2 &&
          head->next->next->value == 1 &&
          head->next->next->next->value == 4
        );
    }

    // Test: ReverseBetweenEndAtLast
    {
        cout << "\n------ Test: ReverseBetweenMiddleToLast ------\n";
        cout << "reverseBetween( 1, 2 )\n";
        
        LinkedList list(1);
        list.append(2);
        list.append(3);
        
        cout << "BEFORE:    ";
        list.printList();
        
        list.reverseBetween(1, 2);
        
        cout << "AFTER:     ";
        list.printList();
        
        // Check condition
        Node* head = list.getHead();
        checkTestResult(
          head && 
          head->value == 1 &&
          head->next->value == 3 &&
          head->next->next->value == 2
        );
    }
    
}

int main(){
  test();
}
