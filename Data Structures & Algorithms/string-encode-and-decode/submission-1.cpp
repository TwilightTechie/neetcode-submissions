class Solution {
public:
//hamle esma size ani # ani string halincha
//Example {"Anup", "Raj", "Arati"} chan vene 
//encode gare si {4#Anup3#Raj5#Arati} huncha
//esko benifit decode gara keri milcha

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
            //Example: "4#Anup3#Raj5#Arati"
            //j ko value 1 huda rukcha kinaki tiha # cha.
            while(s[j]!='#') {
                j++;
            }
            //ele kai haina to len nikalcha
            //Example esma: "4#Anup3#Raj5#Arati"
            //aaile i = 0 cha
            //s.substr(0, 0, 1-0) huncha
            //aru c++ ma substr(start, count) count le kaha tak jani
            //to vancha
            int len = stoi(s.substr(i, i-j));
            //i lai aba Anup ko A ma lai gaye
            i = j + 1;
            //j lai aaba 3 ma lai gaye 
            j = i + len;
            // i A ma cha tiha bata len 4 ho so Anup read
            //garera push garo 
            answer.push_back(s.substr(i, len));
            //first wala while loop break garna ko lagi
            //yo important cha
            i = j;
        }
        return answer;
    }
};
