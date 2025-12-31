// Last updated: 1/1/2026, 2:59:26 AM
1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        // Step 1: Frequency array (0 to 100)
5        vector<int> freq(101, 0);
6        
7        for (int num : nums) {
8            freq[num]++;
9        }
10        
11        // Step 2: Prefix sum
12        for (int i = 1; i <= 100; i++) {
13            freq[i] += freq[i - 1];
14        }
15        
16        // Step 3: Result array
17        vector<int> result;
18        for (int num : nums) {
19            if (num == 0)
20                result.push_back(0);
21            else
22                result.push_back(freq[num - 1]);
23        }
24        
25        return result;
26    }
27};
28