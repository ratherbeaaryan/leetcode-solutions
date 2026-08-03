// Last updated: 8/4/2026, 12:55:35 AM
class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> seen(26,false);
        for(char c:sentence){
            if(c>='a' && c<='z'){
            seen[c-'a']=true;}

        }

        for(bool present:seen){
            if(!present){
                return false;
            }
        }
        return true;

        
        
    }
};