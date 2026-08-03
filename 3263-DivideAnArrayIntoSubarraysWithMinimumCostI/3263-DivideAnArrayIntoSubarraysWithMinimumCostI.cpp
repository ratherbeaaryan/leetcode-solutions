// Last updated: 8/4/2026, 12:54:49 AM
class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int ans = INT_MAX;
        int n = nums.size();
        for(int i=1;i<n-1;i++){
            for(int j = i+1;j<n;j++){
                ans = min(ans,nums[0]+nums[j]+nums[i]);
            }
        }
        return ans;

        
        
    }
};

/*class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        int first = nums[0];

        int a = INT_MAX;
        int b = INT_MAX;
        if(nums.size() == 3){
            return nums[0]+nums[1]+nums[2];
        }
        for(int i=1;i<n;i++){
            if(nums[i] < a){
                b = a;
                a = nums[i];

            }
            else if(nums[i]<b){
                b = nums[i];
            }
            
        }
        return first + a + b;
    }
};*/