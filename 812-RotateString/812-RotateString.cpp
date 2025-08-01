// Last updated: 8/1/2025, 11:39:50 PM
class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        int flag =0;
        while(n){
            char first = s[0];
            s = s.substr(1)+first;
            if(s==goal){
                flag = 1;
            }
            n--;
            
        }
        if(flag==1){
            return 1;
        }
        else{
            return 0;
        }
        
    }
};