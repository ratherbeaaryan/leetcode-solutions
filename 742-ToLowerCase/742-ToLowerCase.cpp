// Last updated: 8/1/2025, 11:39:53 PM
class Solution {
public:
    string toLowerCase(string s) {
        int n = s.size();
        for(int i=0;i<n;i++){
            if(int(s[i])<=90 && int(s[i])>=65)
            s[i] = s[i]+32;
           
            
        }
        return s;
        
    }
};