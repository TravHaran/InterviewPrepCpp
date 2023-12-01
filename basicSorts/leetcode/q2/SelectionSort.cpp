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
        Node* tail;
        int length;

    public:
        LinkedList(int value) {
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
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

        Node* getTail() {
            return tail; 
        }

        int getLength() {
            return length;
        }

        void append(int value) {
            Node* newNode = new Node(value);
            if (length == 0) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
            length++;
        }

       void deleteFirst() {
            if (length == 0) return;
            Node* temp = head;
            if (length == 1) {
                head = nullptr;
                tail = nullptr;
            } else {
                head = head->next;
            }
            delete temp;
            length--;
        }

        void selectionSort(){
            if(length<2)
                return;
            Node* sortedUntil = head;
            Node* min;
            Node* cur;
            while(sortedUntil->next){
                min = sortedUntil;
                cur = sortedUntil;
                while(cur){ // find min node
                    if(cur->value < min->value){
                        min = cur;
                    }
                    cur = cur->next;
                }
                // swap min with sortedUntil
                if(sortedUntil != min){
                    int temp = min->value;
                    min->value = sortedUntil->value;
                    sortedUntil->value = temp;
                }
                sortedUntil = sortedUntil->next;
            }
        }
        
		//   +=====================================================+
		//   |                WRITE YOUR CODE HERE                 |
		//   | Description:                                        |
		//   | - This method sorts the linked list using the       |
		//   |   Selection Sort algorithm.                         |
		//   | - Iterates through the list to find the smallest    |
		//   |   node and swaps it with the current node.          |
		//   |                                                     |
		//   | Return type: void                                   |
		//   |                                                     |
		//   | Tips:                                               |
		//   | - Uses nested while loops for traversal.            |
		//   | - Swaps values, not nodes, for simplicity.          |
		//   | - Check output from Test.cpp in "User logs".        |
		//   +=====================================================+

};