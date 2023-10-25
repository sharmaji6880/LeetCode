class CustomStack {
public:
    int maxSize,currentCount;
    stack<int> s1,s2;
    CustomStack(int maxSize) {
       this->maxSize=maxSize;
       this->currentCount=0; 
    }
    
    void push(int x) {
        if(currentCount==maxSize) {
            return;
        }
        s1.push(x);
        currentCount++;
    }
    
    int pop() {
        if(s1.empty()) {
            return -1;
        }
        int x=s1.top();
        s1.pop();
        currentCount--;
        return x;
    }
    
    void increment(int k, int val) {

        // case 1:
        if(currentCount<=k) 
        {

            while(!s1.empty())  {
                int x=s1.top(); //get
                x+=val; // inc
                s1.pop(); //pop
                s2.push(x); //push to other
            }
            while(!s2.empty()) {
                int x=s2.top(); //get
                s1.push(x); //push to original
                s2.pop(); //pop
            }

            //s2 will be empty 

        }//case 2:
        else {
            while(!s1.empty()) {
                int x=s1.top();
                s1.pop();
                s2.push(x);
            }
            for(int i=1;i<=k;i++) {
                int x=s2.top();
                x+=val;
                s1.push(x);
                s2.pop();
            }
            while(!s2.empty()) {
                int x=s2.top();
                s1.push(x);
                s2.pop();
            }
        }
    }
};
