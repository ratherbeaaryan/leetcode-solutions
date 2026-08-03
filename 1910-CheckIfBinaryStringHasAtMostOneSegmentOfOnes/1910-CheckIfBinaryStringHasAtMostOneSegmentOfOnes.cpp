// Last updated: 8/4/2026, 12:55:42 AM
class Solution {
public:
    bool checkOnesSegment(string s) {
        int n = s.size();
        for(int i=0;i<n-1;i++){
            if(s[i] == '0' && s[i+1]=='1'){
                return false;
            }
        }
        return true;
        
    }
};