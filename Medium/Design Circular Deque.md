> **Problem Number:** 641 <br>
> **Problem Name:** Design Circular Deque <br>
> **Problem Link:** [https://leetcode.com/problems/design-circular-deque/](https://leetcode.com/problems/design-circular-deque/) <br>

    class MyCircularDeque {
    public:
        vector<int> dequeue;
        int capacity;
        MyCircularDeque(int k) {
            capacity = k;
        }
        
        bool insertFront(int value) {
            if( dequeue.size() == capacity ) {
                return false;
            }
            dequeue.insert(dequeue.begin(),value);
            return true;
        }
        
        bool insertLast(int value) {
            if( dequeue.size() == capacity ) {
                return false;
            }
            dequeue.push_back(value);
            return true;
        }

        
        bool deleteFront() {
            if( dequeue.empty() ) {
                return false;
            }
            dequeue.erase(dequeue.begin());
            return true;
        }
        
        bool deleteLast() {
            if( dequeue.empty() ) {
                return false;
            }
            dequeue.erase(dequeue.end());
            return true;
        }
        
        int getFront() {
            if( dequeue.empty() ) {
                return -1;
            }
            return dequeue.front();
        }
        
        int getRear() {
            if( dequeue.empty() ) {
                return -1;
            }
            return dequeue.back();
        }
        
        bool isEmpty() {
            if( dequeue.size() == 0) {
                return true;
            }
            return false;
        }
        
        bool isFull() {
            if( dequeue.size() == capacity ) {
                return true;
            }
            return false;
        }
    };