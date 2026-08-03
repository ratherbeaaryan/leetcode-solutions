// Last updated: 8/4/2026, 12:59:32 AM
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int l=n/2;l>0;l--){
            if(n%l==0){
            int times = n/l;
            string pattern = s.substr(0,l);
            string newp = "";
            while(times--){
                newp+=pattern;
            }
            if(newp == s){
                return true;
            }
                }    }
                return false; 
        
    }
};