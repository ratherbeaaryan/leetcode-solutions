// Last updated: 8/4/2026, 12:54:23 AM
class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int> temp = costs;
        long long last[3] = {0, (long long)1e15, (long long)1e15};
        for (int j = 1; j <= n; j++) {
            long long current = 1e15;
            if (j - 1 >= 0) {
                current = min(current, last[0] + costs[j - 1] + 1);
            }
            if (j - 2 >= 0) {
                current = min(current, last[1] + costs[j - 1] + 4);
            }
            if (j - 3 >= 0) {
                current = min(current, last[2] + costs[j - 1] + 9);
            }
            last[2] = last[1];
            last[1] = last[0];
            last[0] = current;
        }

        return (int)last[0];
    }
};

        
 