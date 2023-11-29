#include <iostream>
#include <vector>

using namespace std;

class Stack {
    private:
        vector<int> stackVector;
    
    public:
        vector<int>& getStackVector() {
            return stackVector;
        }
    
        void printStack() {
            for (int i = stackVector.size() - 1; i >= 0; i--) {
                cout << stackVector[i] << endl;
            }
        }
    
        bool isEmpty() {
            return stackVector.size() == 0;
        }
    
        int peek() {
            if (isEmpty()) {
                return int();
            } else {
                return stackVector[stackVector.size() - 1];
            }
        }
    
        int size() {
            return stackVector.size();
        }
    
        void push(int value) {
            stackVector.push_back(value);
        }

        void pop(){
            if(isEmpty()){
                return;
            }
            stackVector.pop_back();
        }
        //   +=====================================================+
        //   |                 WRITE YOUR CODE HERE                |
        //   | Description:                                        |
        //   | - This method removes the top element               |
        //   |   from the stack (pop).                             |
        //   | - Updates 'stackVector' by removing last element.   |
        //   | - Return type: void                                 |
        //   |                                                     |
        //   | Tips:                                               |
        //   | - Use vector's pop_back() to remove the element     |
        //   |   from the end.                                     |
        //   | - Make sure to check if the stack is empty          |
        //   |   before trying to pop.                             |
        //   | - No return value is needed.                        |
        //   | - Check output from Test.cpp in "User logs".        |
        //   +=====================================================+
  
};
