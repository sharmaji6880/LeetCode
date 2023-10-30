class MyStack {
public:
    vector<int> s;
    MyStack() {
       s={};
    }
    
    void push(int x) {
        s.push_back(x);
    }
    
    int pop() {
        int x=(*(--s.end()));
        s.pop_back();
        return x;
    }
    
    int top() {
        return s[s.size()-1];
    }
    
    bool empty() {
        return s.size()==0;
    }
};

