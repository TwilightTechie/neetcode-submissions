class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> cur;
        vector<vector<int>> res;
        backtracking(nums, target, cur, res, 0);
        return res;
    }

    void backtracking(vector<int> & nums, int target, vector<int>& cur, vector<vector<int>> & res, int i) {
        if (target ==0 ) {
            res.push_back(cur);
            return;
        }
        if (target < 0|| i >= nums.size()) {
            return;
        }
        cur.push_back(nums[i]);
        backtracking(nums, target-nums[i], cur, res, i);
        cur.pop_back();
        backtracking(nums, target, cur, res, i+1);
    }
};
