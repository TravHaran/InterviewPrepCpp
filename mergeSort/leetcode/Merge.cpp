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

        void merge(LinkedList& otherList){
            Node* dummy = new Node(0); // a dummy node to help with merging
            Node* otherHead = otherList.getHead();
            Node* cur = dummy;

            while(head && otherHead){ //add the smaller node to current->next
                if(head->value < otherHead->value){
                    cur->next = head;
                    head = head->next;
                } else {
                    cur->next = otherHead;
                    otherHead = otherHead->next;
                }
                cur = cur->next;
            }
            // if one list is empty add its remainder to current->next
            if(head){
                cur->next = head;
                while(cur->next){
                    cur = cur->next;
                }
            }
            if(otherHead){
                cur->next = otherHead;
                while(cur->next){
                    cur = cur->next;
                }
            }
            //update head, tail and length fields
            tail = cur;
            head = dummy->next;
            delete dummy;
            length += otherList.getLength();

            //clear the head, tail and length fields of the other list
            otherList.head = nullptr;
            otherList.tail = nullptr;
            otherList.length = 0;
        }
        
		//   +=====================================================+
		//   |                WRITE YOUR CODE HERE                 |
		//   | Description:                                        |
		//   | - This method merges two sorted linked lists        |
		//   |   into a single sorted linked list.                 |
		//   | - Utilizes a dummy node to simplify merging.        |
		//   |                                                     |
		//   | Return type: void                                   |
		//   | - Modifies the list in place.                       |
		//   | - Sets the 'head' and 'tail' pointers correctly.    |
		//   |                                                     |
		//   | Tips:                                               |
		//   | - Uses a dummy node for easier linking.             |
		//   | - Check output from Test.cpp in "User logs".        |
		//   +=====================================================+
		
};