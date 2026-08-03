// Last updated: 8/4/2026, 12:56:18 AM
class Solution {
public:
    string makeGood(string s) {
        
        string res = "";

        for (char &ch:s) {
            
            if(res.size()>0 && (res.back() + 32 == ch || res.back() - 32 == ch)){
                res.pop_back();
            }
            else{
                res.push_back(ch);
            }

        }
        return res;
    }
};