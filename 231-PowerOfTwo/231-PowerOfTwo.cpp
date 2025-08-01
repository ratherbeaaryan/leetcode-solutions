// Last updated: 8/1/2025, 11:40:17 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1){
            return 0;
        }
        while(n!=1){
            if(n%2==1)
            return 0;
            n=n/2;
        }
        return 1;
        
    }
};