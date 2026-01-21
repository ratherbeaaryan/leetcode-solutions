// Last updated: 1/21/2026, 12:10:24 PM
1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        unordered_map<int,int> freq;
5        set<int> res;
6        int n= nums.size();
7
8        for(int num:nums){
9            freq[num]++;
10            if(freq[num]>n/3){
11                res.insert(num);
12            }
13        }
14
15        vector<int> v(res.begin(),res.end());
16        return v;
17        
18    }
19};