class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> Mapping;

        for (int i = 0; i < nums.size(); i++) {
            int remainder = target - nums[i];

            if (Mapping.find(remainder)!=Mapping.end()) {
                return {Mapping[remainder], i};
            }
            Mapping.insert({nums[i], i});
        }
        return {};
    }
};
