// Last updated: 8/1/2025, 11:40:54 PM
class Solution {
public:
    int divide(int dividend, int divisor) {
       
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        return dividend / divisor;
    }
};