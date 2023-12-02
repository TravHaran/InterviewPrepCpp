#include <iostream>
#include <vector>
#include "Merge.cpp"

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

    // Check test result: PASS or FAIL
    auto checkTestResult = [](bool condition) {
        cout << (condition ? "PASS" : "FAIL") << endl;
    };

    // Test 1: MergeTwoEmptyLists
    {
        cout << "\n------ Test: MergeTwoEmptyLists ------\n";

        LinkedList list1(0);
        list1.deleteFirst();
        LinkedList list2(0);
        list2.deleteFirst();

        cout << "List1: ";
        list1.printList();

        cout << "List2: ";
        list2.printList();

        list1.merge(list2);

        cout << "Merged: ";
        list1.printList();

        checkTestResult(list1.getLength() == 0);
    }

    // Test 2: MergeEmptyAndNonEmptyLists
    {
        cout << "\n------ Test: MergeEmptyAndNonEmptyLists ------\n";

        LinkedList list1(0);
        list1.deleteFirst();
        LinkedList list2(5);

        cout << "List1: ";
        list1.printList();

        cout << "List2: ";
        list2.printList();

        list1.merge(list2);

        cout << "Merged: ";
        list1.printList();

        checkTestResult(list1.getLength() == 1 &&
                        list1.getHead()->value == 5 &&
                        list1.getTail()->value == 5);
    }

    // Test 3: MergeTwoNonEmptyLists
    {
        cout << "\n------ Test: MergeTwoNonEmptyLists ------\n";

        LinkedList list1(3);
        list1.append(4);
        LinkedList list2(1);
        list2.append(2);

        cout << "List1: ";
        list1.printList();

        cout << "List2: ";
        list2.printList();

        list1.merge(list2);

        cout << "Merged: ";
        list1.printList();

        checkTestResult(list1.getLength() == 4);  // Additional checks could be added
    }

    // Test 4: MergeDifferentLengthLists
    {
        cout << "\n------ Test: MergeDifferentLengthLists ------\n";

        LinkedList list1(1);
        LinkedList list2(2);
        list2.append(3);
        list2.append(4);

        cout << "List1: ";
        list1.printList();

        cout << "List2: ";
        list2.printList();

        list1.merge(list2);

        cout << "Merged: ";
        list1.printList();

        checkTestResult(list1.getLength() == 4);  // Additional checks could be added
    }
    
}

int main(){
    test();
}