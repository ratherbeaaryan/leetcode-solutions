// Last updated: 8/4/2026, 12:56:47 AM
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // Step 1: Frequency array (0 to 100)
        vector<int> freq(101, 0);
        
        for (int num : nums) {
            freq[num]++;
        }
        
        // Step 2: Prefix sum
        for (int i = 1; i <= 100; i++) {
            freq[i] += freq[i - 1];
        }
        
        // Step 3: Result array
        vector<int> result;
        for (int num : nums) {
            if (num == 0)
                result.push_back(0);
            else
                result.push_back(freq[num - 1]);
        }
        
        return result;
    }
};
