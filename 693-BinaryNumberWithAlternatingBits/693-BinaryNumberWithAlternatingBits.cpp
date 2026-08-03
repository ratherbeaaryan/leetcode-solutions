// Last updated: 8/4/2026, 12:58:44 AM
class Solution {
public:
    bool hasAlternatingBits(int n) {
        unsigned int x = n ^ (n >> 1);
        return (x & (x+1)) == 0;
        
    }
};