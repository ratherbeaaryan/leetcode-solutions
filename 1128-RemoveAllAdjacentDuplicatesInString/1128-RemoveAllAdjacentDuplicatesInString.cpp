// Last updated: 8/1/2025, 11:39:39 PM
class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int i = 0;
        
        
        while(i<s.size()){
            //same
            if(ans.size() > 0 && ans[ans.size()-1]==s[i]){
                ans.pop_back();
            }
            //different
            else{
                ans.push_back(s[i]);
                
            }
            i++;
        }
        return ans;
        
    }
};