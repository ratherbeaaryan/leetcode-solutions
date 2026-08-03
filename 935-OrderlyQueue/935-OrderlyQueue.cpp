// Last updated: 8/4/2026, 12:57:54 AM
class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k>1){
            sort(begin(s),end(s));
            return s;
        }
        string result = s;
        int n = s.size();
        for(int l=1;l<=n-1;l++){
            string temp = s.substr(l)+s.substr(0,l);
            result = min(result,temp);

        }
        return result;
        
    }
};