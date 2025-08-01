// Last updated: 8/1/2025, 11:39:43 PM
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n= nums.size(),l=0,r=0,maxlength=0,zeros=0;
        while(r<n){
            if(nums[r]==0){
                zeros++;
            }
            if(zeros>k){
                if(nums[l]==0){
                    zeros--;
                }
                
                l++;

            }
            
            if(zeros<=k){
                int length=r-l+1;
                maxlength=max(maxlength,length);
            }
            r++;


        
        }
        
    return maxlength;
    }
};