// Last updated: 8/1/2025, 11:39:21 PM
class Solution {
public:
    string compressedString(string word) {
        char ch= word[0];
        int digit=1;
        string ans;

        for(int i=1;i<word.size();i++){

            if(word[i]!=word[i-1] or digit== 9)
            {
                ans += '0'+ digit;
                ans += ch;
                digit=1;
                ch = word[i];
            }
        
            else
            {
                digit++;
            }
        }
    
    ans += '0'+digit;
    ans += ch;


    return ans;
    }

};