// Last updated: 9/3/2025, 9:33:03 AM
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