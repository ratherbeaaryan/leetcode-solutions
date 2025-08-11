// Last updated: 8/11/2025, 7:50:55 PM
class Solution {
public:

    void susbseq(vector<int>& nums,int index,int n,vector<vector<int> >&ans,vector<int>temp){
        if(index == n){
        ans.push_back(temp);
        return;}

        susbseq(nums,index+1,n,ans,temp);
        temp.push_back(nums[index]);
        susbseq(nums,index+1,n,ans,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int> >ans;
        vector<int>temp;
        susbseq(nums,0,nums.size(),ans,temp);

        return ans;

        
    }
};