// Last updated: 8/4/2026, 12:54:08 AM
class Solution {
public:
    
    int passwordStrength(string password) {
        int ans = 0;
        set <char> distinct;
        for(char ch: password){
            if(distinct.find(ch) != distinct.end()){
                continue;
            }
            distinct.insert(ch);
            if(ch >= 'a' && ch <='z'){
                ans = ans+1;
            }else if(ch >= 'A' && ch <='Z'){
                ans = ans+2;
            }
            else if(ch >= '0' && ch <='9'){
                ans = ans+3;
            }
            else{
                ans = ans+5;
            }
            
            
        }
        return ans;
        
        
    }
};