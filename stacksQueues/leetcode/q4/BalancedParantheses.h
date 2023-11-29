#ifndef BALANCED_PARENTHESES_H
#define BALANCED_PARENTHESES_H
#include <string>
#include <stack>

using namespace std;

bool isBalancedParentheses(const string& parentheses) {
    stack<char> brackets;
    for(int i = 0; i < parentheses.length(); i++){
        if(parentheses[i]=='('){
            brackets.push(parentheses[i]);
        } else if(parentheses[i]==')' && brackets.empty()){
            return false;
        } else { // parentheses[i]==')' && brackets.top()=='('
            brackets.pop();
        }
    }
    return brackets.empty();
}

#endif // BALANCED_PARENTHESES_H
