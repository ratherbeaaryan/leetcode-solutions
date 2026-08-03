// Last updated: 8/4/2026, 12:56:21 AM
class Solution {
public:
    int numWaterBottles(int b, int n) {
        int ans = b + (b-1)/(n-1);
        return ans;
        
    }
};