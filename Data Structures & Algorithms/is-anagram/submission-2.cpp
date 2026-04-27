class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map1; 
        unordered_map<char, int> map2;
        if (s.size() != t.size()) return false; 
        for (char c : s) {
            map1[c]++;
        }
        for (char c : t) {
            map2[c]++;
        }
        if (map1 == map2) {
            return true;
        }
        return false;
        
    }
};
