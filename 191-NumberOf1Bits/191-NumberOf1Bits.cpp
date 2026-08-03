// Last updated: 8/4/2026, 1:01:31 AM
class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;

        while(n){
            n = n & (n-1);
            count++;
        }

        return count;
        
    }
};