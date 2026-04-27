class Solution {
public:
    bool isPalindrome(string s) {
        //extra storage lagcha yo solution ma kinaki aauta new string 
        //banaucham jasma khali alphabets r number huncha
        string newStr = "";
        for (char c : s) {
            //esle basically remove gardincha , : space aru
            if (isalnum(c)) {
                //ani only alphanumberical kali store garcha
                newStr += tolower(c);
            }
        }
        //rbegin r rend le reverse iterator chalaucha
        return newStr == string(newStr.rbegin(), newStr.rend());
    }
};
