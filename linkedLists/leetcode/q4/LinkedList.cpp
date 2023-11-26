#include <iostream>

using namespace std;

class Node {
    public:
        int value;
        Node* next;
        Node(int value) {
            this->value = value;
            next = nullptr;
        }
};

class LinkedList {
    private:
        Node* head;
        int length;
        
    public:
        LinkedList(int value) {
            Node* newNode = new Node(value);
            head = newNode;
            length = 1;
        }

        ~LinkedList() {
            Node* temp = head;
            while (head) {
                head = head->next;
                delete temp;
                temp = head;
            }
        }

        void printList() {
            Node* temp = head;
            if (temp == nullptr) {
                cout << "empty";
            } else {
                while (temp != nullptr) {
                    cout << temp->value;
                    temp = temp->next;
                    if (temp != nullptr) {
                        cout << " -> ";
                    }
                }
            }
            cout << endl;
        }

        Node* getHead() {
            return head;
        }

        int getLength() {
            return length;
        }
        
        void makeEmpty() {
            Node* temp = head;
            while (head) {
                head = head->next;
                delete temp;
                temp = head;
            }
            length = 0;
        }

        void append(int value) {
            Node* newNode = new Node(value);
            if (head == nullptr) {
                head = newNode;
            } else {
                Node* currentNode = head;
                while (currentNode->next != nullptr) {
                    currentNode = currentNode->next;
                }
                currentNode->next = newNode;
            }
            length++;
        }

        void partitionList(int x) {
            if(!head){
                return;
            }
            Node* start = head;
            Node* piv = head;
            Node* prev = head;
            Node* cur = head;
            Node* temp = head;
            Node* all_less = head;

            // check to see if all items in list are below x
            while(all_less && all_less->value<x){
                all_less = all_less->next;
            }
            if(!all_less){ // this means that we got to the end and all the items in the list were less than x, so nothing needs to be partitioned
                return;
            }

            if(piv->value >= x) {
                cout<<piv<<endl;
                //increment pivot until it's less than x
                while(piv && piv->value>=x){
                    // cout<<piv<<endl;
                    prev = piv;
                    piv=piv->next;
                }
                if(!piv){//this means that all the values in the list are below value of x so nothing needs to be partitioned
                    return;
                } else {
                    //now we found a pivot value for our partition so we need to swap it into the beginning
                    prev->next = piv->next;
                    piv->next = start;
                    // since this pivot is now at the beginning we need to set head
                    head = piv;
                } 
            }
            cur = prev->next;
            while(cur){
                cout<<cur->value<<endl;
                if(cur->value < x) {
                    // now we swap cur in front of pivot
                    temp = piv->next;
                    prev->next = cur->next;
                    piv->next = cur;
                    cur->next = temp;
                    // after swapping we need to move pivot and cur to the correct position
                    piv = piv->next; // set to new pivot
                    cur = prev->next;
                } else {
                    cur = cur->next;
                    prev = prev->next;
                } 
            }
        }

        //   +======================================================+
        //   |                 WRITE YOUR CODE HERE                 |
        //   | Description:                                         |
        //   | - Partition list around value x                      |
        //   | - Return type: void                                  |
        //   |                                                      |
        //   | Tips:                                                |
        //   | - Create two dummy nodes for two new lists           |
        //   | - One list for nodes less than x                     |
        //   | - Another list for nodes greater or equal to x       |
        //   | - Loop through original list                         |
        //   | - Assign nodes to new lists based on value           |
        //   | - Merge the two new lists                            |
        //   | - Update the original list's head                    |
        //   +======================================================+

};


