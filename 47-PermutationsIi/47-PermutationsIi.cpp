// Last updated: 8/4/2026, 1:03:49 AM
class Solution {
public:

void permute(vector<int>& nums,vector<vector<int >>& ans,int index){
    if(nums.size()==index){
        ans.push_back(nums);
        return;
    }
    for(int i=index;i<nums.size();i++){
    swap(nums[index],nums[i]);
    permute(nums,ans,index+1);
    swap(nums[index],nums[i]);}


}
vector<vector<int>> unique(vector<vector<int >>& ans){
    set<vector<int>> uniquearr(ans.begin(),ans.end());
    vector<vector<int>> result(uniquearr.begin(),uniquearr.end());
    return result;
    

}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int >> ans;
        sort(nums.begin(),nums.end());
        permute(nums,ans,0);
        
        return(unique(ans));

        
        
    }
};