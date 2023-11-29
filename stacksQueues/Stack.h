#pragma once

#include <iostream>
#include "Node.h"
using namespace std;

class Stack {
    private:
        Node* top;
        int height;
    public: 
        Stack(int value){
            Node* newNode = new Node(value);
            top = newNode;
            height = 1;
        }

        void printStack(){
            Node* temp = top;
            while(temp){
                cout<<temp->value<<endl;
                temp = temp->next;
            }
        }

        void getTop(){
            cout<<"Top: "<<top->value<<endl;
        }

        void getHeight(){
            cout<<"Height: "<<height<<endl;
        }

        void push(int value){
            Node* newNode = new Node(value);
            newNode->next = top;
            top = newNode;
            height++;
        }

        int pop(){
            if(height==0)
                return INT32_MIN;
            Node* temp = top;
            int poppedVal = top->value;
            top = top->next;
            delete temp;
            height--;
            return poppedVal;
        }
};