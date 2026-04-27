class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0, left = 0;
        unordered_map<char, int> seen;
        int right;
        for(right = 0; right<s.size(); right++) {

            int idx = (seen.find(s[right]) != seen.end() ? seen[s[right]] : -1);
            if (idx != -1 && idx >= left) {
                res = max(res, right - 1 - left + 1);
                left = idx + 1;
            }
            seen[s[right]] = right;
        }
        return max(res, right - 1 - left + 1);
    }
};
