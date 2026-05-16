class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapping;

        for (int i = 0; i<nums.size(); i++) {
            int remainder = target - nums[i];
            if (mapping.find(remainder) != mapping.end()) {
                return {mapping[remainder], i};
            }
            mapping.insert({nums[i], i});
        }
    }
};
