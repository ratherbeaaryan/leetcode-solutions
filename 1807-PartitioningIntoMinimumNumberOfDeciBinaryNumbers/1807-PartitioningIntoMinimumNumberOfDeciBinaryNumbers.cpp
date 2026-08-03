// Last updated: 8/4/2026, 12:55:58 AM
class Solution {
public:
    int minPartitions(string n) {
        int maxDigit = 0;

        for (char c : n) {
            maxDigit = max(maxDigit, c - '0');

            if (maxDigit == 9) {
                return 9;
            }
        }

        return maxDigit;
    }
};