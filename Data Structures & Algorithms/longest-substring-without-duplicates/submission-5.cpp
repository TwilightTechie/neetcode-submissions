class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;

        int l = 0; int sizeM= 0;
        for(int r = 0; r < s.size(); r++) {
            while (charSet.count(s[r])) {
                charSet.erase(s[l]);
                l++;
            }
            charSet.insert(s[r]);
            sizeM = max(sizeM, r - l + 1);
        }
        return sizeM;
    }
};
