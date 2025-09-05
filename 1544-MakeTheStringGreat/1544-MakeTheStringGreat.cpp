// Last updated: 9/6/2025, 3:46:00 AM
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