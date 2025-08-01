// Last updated: 8/1/2025, 11:41:03 PM
class Solution {
public:
    int reverse(int x) {
        
        int i,ans=0;
        
            while(x!=0){
            i=x%10;
            x=x/10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10){
                return 0;
            }
            ans=ans*10+i;
        

        }
        return ans;}
    
};