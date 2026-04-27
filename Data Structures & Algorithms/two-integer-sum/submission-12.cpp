class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sumDict;

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (sumDict.find(diff) != sumDict.end()) {
                cout<<"target and num is " << target<< " "<<nums[i]<<target-nums[i] <<endl;
                return {sumDict[diff], i};
            }
            sumDict.insert({nums[i], i});
        }
        return {};
    }
};
