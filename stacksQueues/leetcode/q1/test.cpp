#include <iostream>
#include "Stack.cpp"

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
    cout << "\n----- Test: Push to Empty Stack -----\n";
    {
        Stack stack;
        cout << "Initial state: empty stack\n";
        cout << "Pushing value of 10 to an empty stack:\n";
        stack.push(10);
        cout << "Peek result: " << stack.peek() << " - EXPECTED: 10\n";
        cout << "Size: " << stack.size() << " - EXPECTED: 1\n";
        cout << (stack.peek() == 10 && stack.size() == 1 ? "PASS\n" : "FAIL\n");
    }

    cout << "\n----- Test: Push to Non-Empty Stack -----\n";
    {
        Stack stack;
        cout << "Pushing value of 10 to an empty stack:\n";
        stack.push(10);
        cout << "Pushing value of 20 to a stack with one element:\n";
        stack.push(20);
        cout << "Peek result: " << stack.peek() << " - EXPECTED: 20\n";
        cout << "Size: " << stack.size() << " - EXPECTED: 2\n";
        cout << (stack.peek() == 20 && stack.size() == 2 ? "PASS\n" : "FAIL\n");
    }

    cout << "\n----- Test: Multiple Pushes -----\n";
    {
        Stack stack;
        cout << "Pushing value of 10 to an empty stack:\n";
        stack.push(10);
        cout << "Pushing value of 20 to a stack with one element:\n";
        stack.push(20);
        cout << "Pushing value of 30 to a stack with two elements:\n";
        stack.push(30);
        cout << "Peek result: " << stack.peek() << " - EXPECTED: 30\n";
        cout << "Size: " << stack.size() << " - EXPECTED: 3\n";
        cout << (stack.peek() == 30 && stack.size() == 3 ? "PASS\n" : "FAIL\n");
    }
    
}

int main(){
    test();
}