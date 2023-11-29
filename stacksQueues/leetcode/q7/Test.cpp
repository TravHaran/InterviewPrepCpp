#include <iostream>
#include "QueueUsingTwoStacks.cpp"

using namespace std;


//  +=====================================================+
//  |                                                     |
//  |          THE TEST CODE BELOW WILL PRINT             |
//  |              OUTPUT TO "USER LOGS"                  |
//  |                                                     |
//  |  Use the output to test and troubleshoot your code  |
//  |                                                     |
//  +=====================================================+


static void test() {
    cout << "\n----- Test: Dequeue from Empty Queue -----\n";
    {
        QueueUsingTwoStacks queue;
        cout << "Initial state: empty queue\n";
        queue.dequeue();
        cout << "Front result after dequeue: " << queue.front() << " - EXPECTED: " << INT_MIN << "\n";
        cout << "Is empty: " << (queue.isEmpty() ? "yes" : "no") << " - EXPECTED: yes\n";
        cout << (queue.isEmpty() && queue.front() == INT_MIN ? "PASS\n" : "FAIL\n");
    }

    cout << "\n----- Test: Dequeue After Multiple Enqueues -----\n";
    {
        QueueUsingTwoStacks queue;
        cout << "Enqueuing values of 1, 2, and 3 to the queue:\n";
        queue.enqueue(1);
        queue.enqueue(2);
        queue.enqueue(3);
        cout << "Front result before dequeue: " << queue.front() << " - EXPECTED: 1\n";
        
        queue.dequeue();
        cout << "Front result after 1st dequeue: " << queue.front() << " - EXPECTED: 2\n";
        queue.dequeue();
        cout << "Front result after 2nd dequeue: " << queue.front() << " - EXPECTED: 3\n";
        cout << (!queue.isEmpty() && queue.front() == 3 ? "PASS\n" : "FAIL\n");
    }

    cout << "\n----- Test: Maintain Order After Multiple Operations -----\n";
    {
        QueueUsingTwoStacks queue;
        cout << "Enqueuing values of 1 and 2, then dequeuing, then enqueuing values of 3 and 4, then dequeuing again:\n";
        queue.enqueue(1);
        queue.enqueue(2);
        queue.dequeue();
        queue.enqueue(3);
        queue.enqueue(4);
        queue.dequeue();
        
        cout << "Front result: " << queue.front() << " - EXPECTED: 3\n";
        queue.dequeue();
        cout << "Front result after dequeue: " << queue.front() << " - EXPECTED: 4\n";
        queue.dequeue();
        cout << "Is empty: " << (queue.isEmpty() ? "yes" : "no") << " - EXPECTED: yes\n";
        cout << "Front result after all dequeues: " << queue.front() << " - EXPECTED: " << INT_MIN << "\n";
        cout << (queue.isEmpty() && queue.front() == INT_MIN ? "PASS\n" : "FAIL\n");
    }
    
}

int main(){
    test();
}