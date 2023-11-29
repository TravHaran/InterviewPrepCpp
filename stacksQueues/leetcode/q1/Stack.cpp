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

        void push(int value){
            return stackVector.push_back(value);
        }
    
        //   +=====================================================+
        //   |                 WRITE YOUR CODE HERE                |
        //   | Description:                                        |
        //   | - This method adds a new element to the top         |
        //   |   of the stack (push).                              |
        //   | - Inserts 'value' to the end of 'stackVector'.      |
        //   | - Return type: void                                 |
        //   |                                                     |
        //   | Tips:                                               |
        //   | - Use vector's push_back() method to add            |
        //   |   the value to the end of the vector.               |
        //   | - No return value is needed.                        |
        //   | - Check output from Test.cpp in "User logs".        |
        //   +=====================================================+
    
};