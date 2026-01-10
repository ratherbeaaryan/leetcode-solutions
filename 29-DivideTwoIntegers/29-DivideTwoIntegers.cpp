// Last updated: 1/10/2026, 11:57:47 PM
1class Solution {
2public:
3    int divide(int dividend, int divisor) {
4       
5        if (dividend == INT_MIN && divisor == -1) {
6            return INT_MAX;
7        }
8
9        return dividend / divisor;
10    }
11};