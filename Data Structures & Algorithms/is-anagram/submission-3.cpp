class Solution {
public:
    bool isAnagram(string s, string t) {
        hash<string> hasher;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        size_t sas = hasher(s);
        size_t tas = hasher(t);

        if (sas == tas) {
            return true;
        }
        else {
            return false;
        }

    }
};
