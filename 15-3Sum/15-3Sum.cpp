// Last updated: 1/21/2026, 12:04:14 PM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        unordered_map<int,int> freq;
5
6        int n = nums.size();
7        for(int num:nums){
8            freq[num]++;
9            if(freq[num]>n/2){
10                return num;
11            }
12        }
13        return -1;
14
15             
16        
17    }
18};