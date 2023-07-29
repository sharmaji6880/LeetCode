class MinStack {
public:
    stack<int> s;
    map<int,int> m;
    MinStack() {
        //Nothing needs to be done here
    }
    
    void push(int val) {
        s.push(val);
        m[val]++;
    }
    
    void pop() {
        m[s.top()]--;
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        map<int,int>::iterator it=m.begin();
        while(it->second==0) {
            ++it;
        }
        return it->first;
    }
};
