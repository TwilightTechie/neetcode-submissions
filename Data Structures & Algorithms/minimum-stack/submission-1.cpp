class MinStack {
private: 
//this will be out actual stack
    stack<int> stacks;
//aru chaini min value store garna ko lagi
    stack<int> minStack;
public:
    MinStack() {}
    
    void push(int val) {
        //stack ma halem 
        stacks.push(val);
        //aba min value nikalna paro minStack ma halna ko lagi 
        //agar minstack ma already kai cha vne ta hamne aaile ko val r 
        //tesko ma min jun huncha telai consider garera minStack ma
        //haldincham
        if (!minStack.empty()) {
            val = min(val, minStack.top());
        }
        //yo first element ko lagi applicable huncha jaba stack ma kai chaina
        //ta min value tai val e huncha
        
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
