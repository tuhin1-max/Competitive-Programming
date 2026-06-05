class MinStack {
public:
    stack<int> st,mn;
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()){
            st.push(value);
            mn.push(value);
            return;
        }

        st.push(value);
        mn.push(min(value,mn.top()));
    }
    
    void pop() {
        st.pop();
        mn.pop();
        return;
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mn.top();
    }
};