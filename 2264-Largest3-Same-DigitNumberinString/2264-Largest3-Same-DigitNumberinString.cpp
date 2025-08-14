// Last updated: 8/14/2025, 10:49:09 PM
class Solution {
public:
    string largestGoodInteger(string num) {
        string fres = "";
        int i = 0;
        int n = num.length();
        
        while (i < n ) {
            
            if (num[i] == num[i+1] && num[i+1] == num[i+2]) {
                
                string currentGood = num.substr(i, 3);
                
                
                if (currentGood > fres) {
                    fres = currentGood;
                }
            }
            
            i++;
        }
        
        return fres;
    }
};