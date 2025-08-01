// Last updated: 8/1/2025, 11:39:45 PM
class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        while(n>=1){
            return fib(n-1)+fib(n-2);
        }
        return 0;

        
    }
};