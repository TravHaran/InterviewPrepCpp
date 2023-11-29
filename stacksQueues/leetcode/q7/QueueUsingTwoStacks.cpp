#include <stack>
#include <climits>

using namespace std;

class QueueUsingTwoStacks {
private:
    stack<int> stack1, stack2;

public:
    int front() {
        if (stack2.empty()) {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }

        if (stack2.empty()) {
            return INT_MIN;
        }

        return stack2.top();
    }

    bool isEmpty() {
        return stack1.empty() && stack2.empty();
    }

    void enqueue(int value) {
        stack1.push(value);
    }

    void dequeue(){
        if(!stack2.empty()){
            stack2.pop();
        } else {
            while(!stack1.empty()){
                stack2.push(stack1.top());
                stack1.pop();
            }
            if(!stack2.empty())
                stack2.pop();
        }
    }

    //   +=====================================================+
    //   |                 WRITE YOUR CODE HERE                |
    //   | Description:                                        |
    //   | - This method removes a value from the front of the |
    //   |   queue (dequeue) using 'stack2'.                   |
    //   | - If 'stack2' is empty, it fills 'stack2' from      |
    //   |   'stack1'.                                         |
    //   | - Return type: void                                 |
    //   |                                                     |
    //   | Tips:                                               |
    //   | - If 'stack2' is empty, pop all elements from       |
    //   |   'stack1' into 'stack2'.                           |
    //   | - Then, pop the top element of 'stack2'.            |
    //   | - Check output from Test.cpp in "User logs".        |
    //   +=====================================================+
    
};