// Last updated: 8/1/2025, 11:39:31 PM
class Solution {
public:
    int maxDepth(string s) {
        int maax = 0;
        int current = 0;
        for(char c:s){
            if(c == '('){
                current++;
                maax = max(current,maax);
            }
            else if(c==')'){
                current--;
            }

        }
        return maax;
        
        
    }
};