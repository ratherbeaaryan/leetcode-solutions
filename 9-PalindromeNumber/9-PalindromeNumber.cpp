// Last updated: 8/1/2025, 11:41:01 PM
class Solution {
public:
    bool isPalindrome(int x) {
        int r,n=0;
        int m=x;
        if(x<0)
        return 0;

        while(x!=0){
            r=x%10;
            x=x/10;
            if(n>INT_MAX/10){
                return 0;
            }
            n=n*10+r;
            }
        if(n==m)
        return 1;
        else
        return 0;
    }
};