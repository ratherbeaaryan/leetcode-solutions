// Last updated: 8/1/2025, 11:40:28 PM
class Solution {
public:
    string reverseWords(string s) {
        string temp="";
        string ans="";
        int i=0;
        s=s+' ';
        int j=s.size();
        while(i<j){
            if(s[i]==' ' && temp.size()>=1){
                ans = temp + ' '+ans;
                temp="";
            }
            if(s[i]!=' ') temp=temp+ s[i];
            i++;
        }
        ans.pop_back();
        return ans;
    }
};