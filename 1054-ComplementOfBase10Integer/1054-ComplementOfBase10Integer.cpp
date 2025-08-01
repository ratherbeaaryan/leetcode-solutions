// Last updated: 8/1/2025, 11:39:42 PM
class Solution {
public:
    int bitwiseComplement(int n) {
        int r,ans=0,mul=1;
        if(n==0)
        return 1;
        
        while(n){
            r=n%2;
            r = r^1;
            n=n/2;
            ans = ans + r*mul;
            mul=mul*2;
        }
        return ans;
        
    }
};