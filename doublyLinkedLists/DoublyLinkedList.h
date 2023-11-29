#pragma once

#include <iostream>
#include "Node.h"
using namespace std;

class DoublyLinkedList{
    private:
        Node* head;
        Node* tail;
        int length;
    
    public:
        DoublyLinkedList(int value){
            //create new Node
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
            length = 1;
        }

        ~DoublyLinkedList() {
            Node* temp = head;
            while (head) {
                head = head->next;
                delete temp;
                temp = head;
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
            if(length==0){
                head = newNode;
                tail = newNode;
            } else {
                Node* temp = tail;
                tail = newNode;
                temp->next = tail;
                tail->prev = temp;
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
                temp->prev = head;
            }
            length++;
        }
        
        void deleteLast(){
            if(length==0){
                return;
            }
            if(length==1){
                head=nullptr;
                tail=nullptr;
            } else {
                Node* temp = tail->prev;
                temp->next = nullptr;
                delete(tail);
                tail = temp;
            }
            length--;
        }

        void deleteFirst(){
            if(length==0){
                return;
            }
            if(length==1){
                head=nullptr;
                tail=nullptr;
            } else {
                Node* temp = head;
                head = head->next;
                delete(temp);
            }
            length--;
        }

        Node* get(int index){
            if(index < 0 || index >= length){
                return nullptr;
            } else {
                Node* temp = head;
                if(index < length/2){
                    for(int i = 0; i<index; i++){
                        temp = temp->next;
                    }
                } else {
                    temp = tail;
                    for(int i=length-1; i>index; i--){
                        temp = temp->prev;
                    }
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

        bool insert(int index, int value){
            //create new Node
            Node* newNode = new Node(value);
            //insert Node at specified index
            if(index==0){
                prepend(value);
                return true;
            } else if(index==length){
                append(value);
                return true;
            }
            Node* temp = get(index);
            if(temp){
                Node* prev = temp->prev;
                prev->next = newNode;
                newNode->prev = prev;
                newNode->next = temp;
                temp->prev = newNode;
                length++;
                return true;
            } else {
                return false;
            } 
        }

        void deleteNode(int index){
            if(index==0){
                return deleteFirst();
            } else if(index==length-1){
                return deleteLast();
            } else {
                Node* temp = get(index);
                if(temp){
                    Node* prev = temp->prev;
                    Node* post = temp->next;
                    prev->next = post;
                    post->prev = prev;
                    delete(temp);
                    length--;
                } else {
                    return;
                }
            }
        }
};