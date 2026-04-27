class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for (auto &s : strs) {
            encoded += to_string(s.size()) + "#" + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> answer;
        int i = 0; 
        while (i < s.size()) {
            int j = i;
            while(s[j]!='#') {
                j++;
            }
            int len = stoi(s.substr(i, i-j));
            i = j + 1;
            j = i + len;
            answer.push_back(s.substr(i, len));
            i = j;
        }
        return answer;
    }
};
