#pragma once

#include <iostream>
using namespace std;

class Node{
    public:
        int value;
        Node* next;
        
        Node(int value){
            this->value = value;
            next = nullptr;
        }
};
