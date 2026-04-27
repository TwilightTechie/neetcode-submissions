class Solution {
public:

    void backtrack(int openN, int closedN, int n, vector<string>& res, string& stack) {
//yo base case ho, taba e huncha jaba n ko saman openN r closedN huncha
//jo ki hamlai chahincha
        if (openN == closedN && openN == n) {
            res.push_back(stack);
            return;
        }
//agar open kaam(less) ca vne n valda, tesovai add gara open parantethis
        if (openN < n) {
            stack += '(';
            backtrack(openN + 1, closedN, n, res, stack);
            //ek baar backtracking katam bayesi pop gardinu
            stack.pop_back();
        }

        if (closedN < openN) {
            stack += ')';
            backtrack(openN , closedN + 1, n, res, stack);
            stack.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string stack;
        backtrack(0, 0, n, res, stack);
        return res;
        
    }
};


// Let’s follow the recursion stack step by step for n = 2:
// 1. At ""

// Add '(' → "("

// Call → backtrack(1, 0, 2, "(", res)

// 2. At "("

// Add '(' → "(("

// Call → backtrack(2, 0, 2, "((", res)

// 3. At "(("

// Can’t add '(' (already 2)

// Add ')' → "(()"

// Call → backtrack(2, 1, 2, "(()", res)

// 4. At "(()"

// Can add ')' → "(())"

// Call → backtrack(2, 2, 2, "(())", res)

// This hits the base case and pushes "(())" into results.

// Now return.

// 5. Pop chain starts

// Here’s the important part:

// After "(())" returns, we pop back one level (removing last ')' from "(()")
// → stack goes back to "(()" → "(()" is done.

// Back in "((", we also pop the ')' we had added to make "(()"
// → stack goes back to "((".

// Now "((" has no more options (both open & closed exhausted), so it returns to "(".

// At "(", the '(' we added earlier is popped → back to "(".
// Now "(" tries its other option (')'), making "()".
