#pragma once

#include <iostream>
using namespace std;

class Node{
    public:
        string key;
        int value;
        Node* next;
        
        Node(string key, int value){
            this->key = key;
            this->value = value;
            next = nullptr;
        }
};