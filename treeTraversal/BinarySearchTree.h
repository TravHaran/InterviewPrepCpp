#pragma once

#include<iostream>
#include "Node.h"
#include <queue>
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

        void BFS(){
            queue<Node*> myQueue;
            myQueue.push(root);
            while(!myQueue.empty()){
                Node* currentNode = myQueue.front();
                cout<<currentNode->value<<" ";
                myQueue.pop();
                if(currentNode->left)
                    myQueue.push(currentNode->left);
                if(currentNode->right)
                    myQueue.push(currentNode->right);
            }
        }

        void DFSPreOrder(){
            DFSPreOrder(root);
        }

        void DFSPreOrder(Node* currentNode){
            cout<<currentNode->value<<" ";
            if(currentNode->left)
                DFSPreOrder(currentNode->left);
            if(currentNode->right)
                DFSPreOrder(currentNode->right);
        }

        void DFSPostOrder(){
            DFSPostOrder(root);
        }

        void DFSPostOrder(Node* currentNode){
            if(currentNode->left)
                DFSPostOrder(currentNode->left);
            if(currentNode->right)
                DFSPostOrder(currentNode->right);
            cout<<currentNode->value<<" ";
        }

        void DFSInOrder(){
            DFSInOrder(root);
        }

        void DFSInOrder(Node* currentNode){
            if(currentNode->left)
                DFSInOrder(currentNode->left);
            cout<<currentNode->value<<" ";
            if(currentNode->right)
                DFSInOrder(currentNode->right);
        }
};