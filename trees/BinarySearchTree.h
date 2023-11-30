#pragma once

#include<iostream>
#include "Node.h"
using namespace std;

class BinarySearchTree{
    public:
        Node* root;
    public:
        BinarySearchTree(){
            root = nullptr;
        }

        BinarySearchTree(int value){
            Node* newNode = new Node(value);
            root = newNode;
        }

        bool insert(int value){
            Node* newNode = new Node(value);
            if(root==nullptr){
                root = newNode;
                return true;
            }
            Node* temp = root;
            while(true){
                if(newNode->value < temp->value){ // move left
                    if(temp->left==nullptr){
                        temp->left = newNode;
                        return true;
                    }
                    temp = temp->left;
                } else if(newNode->value > temp->value) { // move right
                    if(temp->right==nullptr){
                        temp->right = newNode;
                        return true;
                    }
                    temp = temp->right;
                } else { // newNode==temp
                    return false;
                }
            }
        }

        bool contains(int value){
            Node* temp = root;
            while(temp){
                if(temp->value == value){
                    return true;
                } else if(value < temp->value){
                    temp = temp->left;
                } else {
                    temp = temp->right;
                }
            }
            return false;
        }
};