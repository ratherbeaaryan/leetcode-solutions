// Last updated: 8/1/2025, 11:39:26 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n = nums.size(),l = 0,r=1;
        int arr[n];
        for(int i =0;i<n;i++){
            if(nums[i]>0){
                arr[l]=nums[i];
                l+=2;

            }
            else{
                arr[r]=nums[i];
                r+=2;
            }

        }
        for(int i=0;i<n;i++){
            nums[i]=arr[i];
        }
        return nums;

        
    }
};