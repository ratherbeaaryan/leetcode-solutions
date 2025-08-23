// Last updated: 8/23/2025, 2:54:35 PM
class Solution {
public:
    void permutation(vector<int>&nums,vector<vector<int>>& ans,vector<bool>& visited,vector<int>& temp){
        if(visited.size()==temp.size()){
            ans.push_back(temp);
            return ;
            
        }
        for(int i=0;i<visited.size();i++){
            if(visited[i]==0){
                visited[i]=1;
                temp.push_back(nums[i]);
                permutation(nums,ans,visited,temp);
                visited[i]=0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector <bool> visited(nums.size(),0);
        vector <vector<int>> ans;
        vector <int> temp;
        
        permutation(nums,ans,visited,temp);
        return ans;


        
    }

};