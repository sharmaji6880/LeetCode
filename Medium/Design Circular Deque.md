> **Problem Number:** 641 <br>
> **Problem Name:** Design Circular Deque <br>
> **Problem Link:** [https://leetcode.com/problems/design-circular-deque/](https://leetcode.com/problems/design-circular-deque/) <br>

    class MyCircularDeque {
    public:
        vector<int> deque;
        int capacity;
        MyCircularDeque(int k) {
            capacity = k;
        }
        
        bool insertFront(int value) {
            if( deque.size() == capacity ) {
                return false;
            }
            deque.insert(deque.begin(),value);
            return true;
        }
        
        bool insertLast(int value) {
            if( deque.size() == capacity ) {
                return false;
            }
            deque.push_back(value);
            return true;
        }

        
        bool deleteFront() {
            if( deque.empty() ) {
                return false;
            }
            deque.erase(deque.begin());
            return true;
        }
        
        bool deleteLast() {
            if( deque.empty() ) {
                return false;
            }
            deque.erase(deque.end());
            return true;
        }
        
        int getFront() {
            if( deque.empty() ) {
                return -1;
            }
            return deque.front();
        }
        
        int getRear() {
            if( deque.empty() ) {
                return -1;
            }
            return deque.back();
        }
        
        bool isEmpty() {
            if( deque.size() == 0) {
                return true;
            }
            return false;
        }
        
        bool isFull() {
            if( deque.size() == capacity ) {
                return true;
            }
            return false;
        }
    };