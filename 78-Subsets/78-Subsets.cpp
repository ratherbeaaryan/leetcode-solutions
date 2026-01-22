// Last updated: 1/22/2026, 10:05:44 AM
1class Solution {
2public:
3
4    void susbseq(vector<int>& nums,int index,int n,vector<vector<int> >&ans,vector<int>temp){
5        if(index == n){
6        ans.push_back(temp);
7        return;}
8
9        susbseq(nums,index+1,n,ans,temp);
10        temp.push_back(nums[index]);
11        susbseq(nums,index+1,n,ans,temp);
12    }
13    vector<vector<int>> subsets(vector<int>& nums) {
14
15        vector<vector<int> >ans;
16        vector<int>temp;
17        susbseq(nums,0,nums.size(),ans,temp);
18
19        return ans;
20
21        
22    }
23};