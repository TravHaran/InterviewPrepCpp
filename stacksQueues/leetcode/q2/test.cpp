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
    cout << "\n----- Test: Pop From Non-Empty Stack -----\n";
    {
        Stack stack;
        cout << "Initial state: empty stack\n";
        cout << "Pushing values 10 and 20:\n";
        stack.push(10);
        stack.push(20);
        cout << "Popping the top value:\n";
        stack.pop();
        cout << "Peek result: " << stack.peek() << " - EXPECTED: 10\n";
        cout << "Size: " << stack.size() << " - EXPECTED: 1\n";
        cout << (stack.peek() == 10 && stack.size() == 1 ? "PASS\n" : "FAIL\n");
    }

    cout << "\n----- Test: Pop From Empty Stack -----\n";
    {
        Stack stack;
        cout << "Initial state: empty stack\n";
        cout << "Popping from an empty stack (should do nothing):\n";
        stack.pop();
        cout << "Size: " << stack.size() << " - EXPECTED: 0\n";
        cout << "Stack is " << (stack.isEmpty() ? "empty" : "not empty") << " - EXPECTED: empty\n";
        cout << (stack.isEmpty() && stack.size() == 0 ? "PASS\n" : "FAIL\n");
    }

    cout << "\n----- Test: Multiple Pops -----\n";
    {
        Stack stack;
        cout << "Pushing values 10, 20, and 30:\n";
        stack.push(10);
        stack.push(20);
        stack.push(30);
        cout << "Popping top two values:\n";
        stack.pop();
        stack.pop();
        cout << "Peek result: " << stack.peek() << " - EXPECTED: 10\n";
        cout << "Size: " << stack.size() << " - EXPECTED: 1\n";
        cout << (stack.peek() == 10 && stack.size() == 1 ? "PASS\n" : "FAIL\n");
    }

    cout << "\n----- Test: Pop Until Empty -----\n";
    {
        Stack stack;
        cout << "Pushing values 10, 20, and 30:\n";
        stack.push(10);
        stack.push(20);
        stack.push(30);
        cout << "Popping all values until stack is empty:\n";
        stack.pop();
        stack.pop();
        stack.pop();
        cout << "Size: " << stack.size() << " - EXPECTED: 0\n";
        cout << "Stack is " << (stack.isEmpty() ? "empty" : "not empty") << " - EXPECTED: empty\n";
        cout << "Popping from empty stack (should still be empty):\n";
        stack.pop(); // Should still be empty
        cout << "Stack is " << (stack.isEmpty() ? "empty" : "not empty") << " - EXPECTED: empty\n";
        cout << (stack.isEmpty() && stack.size() == 0 ? "PASS\n" : "FAIL\n");
    }
    
}

int main(){
    test();
}