class Solution {
public:
    bool isValid(string s) {
        //stack to store opening braces
        stack<char> stack;
        //ending braces to opening ko mapping
        //hashmap ma store gardai
        unordered_map<char, char> closeToOpen = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (auto &c : s){
            //agar c chaini closing wala ho taba balla yo if ko
            //bitra jancha navai 1111 likeko if ma jancha
            if (closeToOpen.count(c)) {
                //aba hamne hercam stack emtpy ta chaina
                //aru stack to top ma jun cha to r aaile ko closing braces
                //ko value from hasmap same ho r. 
                if (!stack.empty() && stack.top() == closeToOpen[c]) {
                    //ho vne stack bata opening lai nikaldau
                    stack.pop();
                }
                else {
                    //navai wrong case ho 
                    return false;
                }
            }
            ///1111 opening braces ho vne stack ma halde. 
            else {
                stack.push(c);
            }
        }
        return stack.empty();
        
    }
};
