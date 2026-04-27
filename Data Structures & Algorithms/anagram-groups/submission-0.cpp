class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> req;

        for (int i = 0; i < strs.size(); i++) {
            string copy = strs[i];
            sort(copy.begin(), copy.end());
            req[copy].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for (auto i:req) {
            ans.push_back(i.second);
        }
        return ans;
    }
};
