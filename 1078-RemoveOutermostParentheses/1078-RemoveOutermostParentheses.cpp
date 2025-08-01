// Last updated: 8/1/2025, 11:39:41 PM
class Solution {
public:
    string removeOuterParentheses(string s) {

        int num = 0;
        string ans = "";
        string str = "";

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(') 
            {
                num++;
                if (num != 1) {
                    str += s[i];
                }
            }

            else 
            {

                num--;
                if (num != 0) {
                    str += s[i];
                }
            }
        }

        return str;
    }
};