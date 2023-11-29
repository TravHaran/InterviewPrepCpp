#include <iostream>
#include "SortStack.h"

using namespace std;


void test() {
    cout << "\n----- Test: Empty Stack -----\n";
    {
        stack<int> s;
        sortStack(s);
        cout << "Stack is " << (s.empty() ? "empty" : "not empty") << " - EXPECTED: empty\n";
        cout << (s.empty() ? "PASS\n" : "FAIL\n");
    }

    cout << "\n----- Test: Single Element -----\n";
    {
        stack<int> s;
        s.push(42);
        sortStack(s);
        cout << "Top element: " << s.top() << " - EXPECTED: 42\n";
        cout << (s.top() == 42 ? "PASS\n" : "FAIL\n");
    }

    cout << "\n----- Test: Already Sorted -----\n";
    {
        stack<int> s;
        s.push(3);
        s.push(2);
        s.push(1);
        sortStack(s);
        int expected[] = {1, 2, 3};
        bool pass = true;
        for (int i : expected) {
            if (s.top() != i) {
                pass = false;
                break;
            }
            s.pop();
        }
        cout << (pass ? "PASS\n" : "FAIL\n");
    }

    cout << "\n----- Test: Unsorted Stack -----\n";
    {
        stack<int> s;
        s.push(1);
        s.push(3);
        s.push(2);
        sortStack(s);
        int expected[] = {1, 2, 3};
        bool pass = true;
        for (int i : expected) {
            if (s.top() != i) {
                pass = false;
                break;
            }
            s.pop();
        }
        cout << (pass ? "PASS\n" : "FAIL\n");
    }

    cout << "\n----- Test: All Equal Elements -----\n";
    {
        stack<int> s;
        s.push(5);
        s.push(5);
        s.push(5);
        sortStack(s);
        bool pass = true;
        while (!s.empty() && pass) {
            if (s.top() != 5) {
                pass = false;
            }
            s.pop();
        }
        cout << (pass ? "PASS\n" : "FAIL\n");
    }
}

int main(){
    test();
}

/* 
    EXPECTED OUTPUT:
    ----- Test: Empty Stack -----
    Stack is empty - EXPECTED: empty
    PASS
    ----- Test: Single Element -----
    Top element: 42 - EXPECTED: 42
    PASS
    ----- Test: Already Sorted -----
    PASS
    ----- Test: Unsorted Stack -----
    PASS
    ----- Test: All Equal Elements -----
    PASS

*/

