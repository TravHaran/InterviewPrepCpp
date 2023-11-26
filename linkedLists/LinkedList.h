#pragma once

#include <iostream>
#include "Node.h"
using namespace std;

class LinkedList{
    private:
        Node* head;
        Node* tail;
        int length;

    public:
        LinkedList(int value){
            //create new Node
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
            length = 1;
        }

        ~LinkedList(){
            Node* temp = head;
            while(temp){
                head = head->next;
                temp = head;
                delete(temp);
            }
        }

        void getHead(){
            if(length==0){
                cout<<"Head: null"<<endl;
            } else {
                cout<<"Head: "<<head->value<<endl;
            }
            
        }

        void getTail(){
            if(length==0){
                cout<<"Tail: null"<<endl;
            } else {
                cout<<"Tail: "<<tail->value<<endl;
            }
        }

        void getLength(){
            cout<<"Length: "<<length<<endl;
        }

        void append(int value){
            //create new Node
             Node* newNode = new Node(value);
            //add Node to the end
            if(length==0){ //check if list is empty
                head = newNode;
                tail = newNode;
            } else {
                Node* temp = tail;
                tail = newNode;
                temp->next = tail;
            }
            length++;
        }

        void prepend(int value){
            //create new Node
             Node* newNode = new Node(value);
            //add Node to the beginning
            if(length==0){
                head = newNode;
                tail = newNode;
            } else {
                Node* temp = head;
                head = newNode;
                head->next = temp;
            }
            length++;
        }

        bool insert(int index, int value){
            //create new Node
             Node* newNode = new Node(value);
            //insert Node at specified index
            if(index<0 || index>length){
                return false;
            } else {
                Node* temp = head;
                Node* pre = head;
                for(int i = 0; i<index; i++){
                    pre = temp;
                    temp = temp->next;
                }
                if(index==0){
                    prepend(value);
                } else if(index==length){
                    append(value);
                }else {
                    pre->next = newNode;
                    newNode->next = temp;
                }    
            }
            length++;
            return true;
        }

        void deleteNode(int index){
            if(index<0 || index>=length){
                return;
            } else {
                Node* temp = head;
                Node* pre = head;
                for(int i = 0; i<index; i++){
                    pre = temp;
                    temp = temp->next;
                }
                if(index==0){
                    return deleteFirst();
                } else if(index==length-1){
                    return deleteLast();
                } else {
                    pre->next = temp->next;
                    delete(temp);
                    length--;
                }
            }
        }

        void deleteLast(){
            if(length==0)//if list is empty
                return;
            Node* temp = head;
            if(length==1){ //if list has one item
                head = nullptr;
                tail = nullptr;
            } else { //if list has two or more items
                Node* pre = head;
                while(temp->next){
                    pre = temp;
                    temp = temp->next;
                }
                tail = pre;
                tail->next = nullptr;
            }
            delete(temp);
            length--;  
        }

        void deleteFirst(){
            if(length==0){
                return;
            }
            Node* temp = head;
            if(length==1){
                head = nullptr;
                tail = nullptr;

            } else {
                head = head->next;
            }
            delete(temp);
            length--;
        }

        void reverse(){
            if(length<=1){
                return;
            } else {
                // Swap head & tail
                Node* temp = head;
                head = tail;
                tail = temp;
                // reverse each node
                Node* pre = nullptr;
                Node* post = temp->next;
                while(post){
                    post = temp->next;
                    temp->next = pre;
                    pre = temp;
                    temp = post;
                    
                }
            }
        }

        Node* get(int index){
            if(index < 0 || index >= length){
                return nullptr;
            } else {
                Node* temp = head;
                for(int i= 0; i<index; i++){
                    temp = temp->next;
                }
                return temp;
            }
        }

        bool set(int index, int value){
            Node* temp = get(index);
            if(temp){
                temp->value = value;
                return true;
            }
            return false;
        }

        void printList(){
            if(length==0){
                return;
            }
            Node* temp = head;
            while(temp){
                cout<<temp->value<<endl;
                temp = temp->next;
            }
        }

        Node* findMiddleNode(){
            Node* slow = head;
            Node* fast = head;
            while(fast && fast->next){
                slow = slow->next;
                fast = fast->next->next;
            }
            return slow;
        }
};
