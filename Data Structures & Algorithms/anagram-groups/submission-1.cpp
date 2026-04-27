class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;

        for (int i = 0; i < strs.size(); i++) {
            vector<int> count(26, 0);
            for (char c : strs[i]) {
                count[c - 'a'] += 1;
            }
            string key;
            key.reserve(26*2);
            for (int j = 0; j < 26; j++) {
                key.push_back('#');
                key += to_string(count[j]);
            }   
            res[key].push_back(strs[i]);
         }
         vector<vector<string>> result;
         for (auto &p : res) {
            result.push_back(p.second);
         }
         return result;
    }
};
