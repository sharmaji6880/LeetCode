> **Problem Number:** 1381 <br>
> **Problem Name:** Design a Stack With Increment Operation <br>
> **Problem Link:** [https://leetcode.com/problems/design-a-stack-with-increment-operation/](https://leetcode.com/problems/design-a-stack-with-increment-operation/) <br>

    class CustomStack {
    public:
        int maxSize;
        vector<int> arr;
        CustomStack(int maxSize) {
        this->maxSize=maxSize;
        }
        int min(int a,int b) {
            if(a<=b) {
                return a;
            }
            return b;
        }
        
        void push(int x) {
            if(arr.size()==maxSize) {
                return;
            }
            arr.push_back(x);
        }
        
        int pop() {
            if(arr.empty()) {
                return -1;
            }
            int x=arr.back();
            arr.pop_back();
            return x;
        }
        
        void increment(int k, int val) {
            int count=min(k,arr.size());
            for(int i=0;i<count;i++) {
                arr[i]+=val;
            }
        }
    };

