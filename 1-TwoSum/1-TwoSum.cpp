// Last updated: 1/21/2026, 10:35:11 AM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int, int> m;
5
6        for (int i = 0; i < nums.size(); i++) {
7            int complement = target - nums[i];
8
9            if (m.find(complement) != m.end()) {
10                return {m[complement], i};
11            }
12
13            m[nums[i]] = i;
14        }
15
16        return {};
17    }
18};
19