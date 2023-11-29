#include <stack>

using std::stack; // This line allows you to use 'stack' instead of 'std::stack'

void sortStack(stack<int>& inputStack) {
    stack<int> maxStack;
    while(!inputStack.empty()){
        if(maxStack.empty() || inputStack.top() >= maxStack.top()){
            maxStack.push(inputStack.top());
            inputStack.pop();
        } else { // inputStack.top() < maxStack.top()
            int inputVal = inputStack.top();
            inputStack.pop();
            while(!maxStack.empty() && inputVal < maxStack.top()){
                inputStack.push(maxStack.top());
                maxStack.pop();
            }
            maxStack.push(inputVal);
        }
    }
    while(!maxStack.empty()){
        inputStack.push(maxStack.top());
        maxStack.pop();
    }
}