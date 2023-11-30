#pragma once

#include <iostream>
#include <vector>
#include "Node.h"
using namespace std;

class HashTable{
    private:
        static const int SIZE = 7;
        Node* dataMap[SIZE];

        int hash(string key){
            int hash = 0;
            for(int i = 0; i < key.length(); i++){
                int asciiVal = int(key[i]);
                hash = (hash+ asciiVal*23) % SIZE; // multiplying by a prime # makes the resource more random
            }
            return hash;
        }

    public:
        void printTable(){
            for(int i = 0; i < SIZE; i++){
                cout<<i<<":"<<endl;
                if(dataMap[i]){
                    Node* temp = dataMap[i];
                    while(temp){
                        cout<<" {"<<temp->key<<", "<<temp->value<<"}"<<endl;
                        temp=temp->next;
                    }
                }
            }
        }

        void set(string key, int value){
            int index = hash(key);
            Node* newNode = new Node(key, value);
            if (dataMap[index]==nullptr){
                dataMap[index] = newNode;
            } else {
                Node* temp = dataMap[index];
                while(temp->next){
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }

        int get(string key){
            int index  = hash(key);
            Node* temp = dataMap[index];
            while(temp){
                if(temp->key == key)
                    return temp->value;
                temp = temp->next;
            }
            return 0;
        }

        vector<string> keys(){
            vector<string> allKeys;
            for(int i = 0; i < SIZE; i++){
                Node* temp = dataMap[i];
                while(temp){
                    allKeys.push_back(temp->key);
                    temp = temp->next;
                }
            }
            return allKeys;
        }
};