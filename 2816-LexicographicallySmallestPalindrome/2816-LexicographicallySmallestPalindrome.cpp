// Last updated: 8/1/2025, 11:39:24 PM
class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
    
        while(i<j){
            if(s[i]!=s[j]){
                if(int(s[i])>int(s[j]))   s[i]=s[j];
                else    s[j]=s[i];
            }
            i++;
            j--;
        }
        return s;
    }
};