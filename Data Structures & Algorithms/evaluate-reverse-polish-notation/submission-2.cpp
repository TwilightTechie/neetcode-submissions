//always remener: 
//declare any stl lib inside the funtion 
//dont do it after public as it might confuse when stack is 
//named as stack

//use else if 

//also always do b - a or b + a so that no confusion.
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        for (auto &c: tokens) {
            if (c == "+") {
                int a = stack.top(); stack.pop();
                int b = stack.top(); stack.pop();
                stack.push(b + a);
            }
            else if (c == "*") {
                int a = stack.top(); stack.pop();
                int b = stack.top(); stack.pop();
                stack.push(b * a);
            }
            else if (c == "-") {
                int a = stack.top(); stack.pop();
                int b = stack.top(); stack.pop();
                stack.push(b - a);
            }
            else if (c == "/") {
                int a = stack.top(); stack.pop();
                int b = stack.top(); stack.pop();
                stack.push(b / a);
            }
            else {
                //yo main jagah ho jaha hamne input numbers arlai halincha
                //string bata convert int ma garera aru baki agar kunai operator
                //input ma aaudai cha vne telai mathi ko if else if le handle
                //garcha
                stack.push(stoi(c));
            }
        }
        //as hamne stack mai store gardai cham so return that
        return stack.top();
    }
};
