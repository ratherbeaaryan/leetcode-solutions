// Last updated: 8/20/2025, 4:00:10 PM
class Solution {
public:
    int minDays(vector<int>& nums, int m, int k) {
        if (nums.size() < (long long)m * k) {
            return -1;
        }

        int low = *min_element(nums.begin(), nums.end());
        int high = *max_element(nums.begin(), nums.end());
        
        while (low <= high) {
            int mid =low +(high-low)/ 2;
            if (findbloomday(nums, mid, k) < m) {
                low = mid + 1;

            } else {
                high = mid - 1;
            }
        }
        return low;
    }

private:
    int findbloomday(vector<int>& nums, int day, int flower) {
        int buq = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= day) {
                count++;
                if (count == flower) {
                    buq++;
                    count = 0;
                }
            } else {
                count = 0;
            }
        }
        return buq;
    }

};
