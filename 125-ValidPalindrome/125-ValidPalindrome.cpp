// Last updated: 8/1/2025, 11:40:32 PM
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int l = 0, r= n;
        while(l<r){
            if(!isalnum(s[l])){
                l++;
                continue;
            }
            if(!isalnum(s[r])){
                r--;
                continue;
            }
            if(tolower(s[l])!=tolower(s[r])){
                return false;
            }
            else{
                l++;
                r--;
            }

        }
        return true;
        
    }
};