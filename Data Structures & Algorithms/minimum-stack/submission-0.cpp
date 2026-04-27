class MinStack {
private: 
    stack<int> stacks;
    stack<int> minStack;
public:
    MinStack() {}
    
    void push(int val) {
        stacks.push(val);
        if (!minStack.empty()) {
            val = min(val, minStack.top());
        }
        minStack.push(val);
    }
    
    void pop() {
        stacks.pop();
        minStack.pop();
        
    }
    
    int top() {
        return stacks.top();
        
    }
    
    int getMin() {
        return minStack.top();
    }
};
