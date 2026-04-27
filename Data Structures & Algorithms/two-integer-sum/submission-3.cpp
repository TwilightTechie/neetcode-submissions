class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;

        for (int i = 0; i < nums.size(); i++) {
            indices[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int remaining = target-nums[i];
            if (indices.count(remaining) && indices[remaining] != i) {
                return {i, indices[remaining]};
            }
        }
        return {};
        
    }
};
