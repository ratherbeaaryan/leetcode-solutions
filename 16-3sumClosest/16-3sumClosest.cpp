// Last updated: 8/22/2025, 11:52:06 PM
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
    sort(nums.begin(),nums.end());
    int n = nums.size();

int result = nums[0]+nums[1]+nums[2];
for(int i=0;i<n-2;i++){
    int start = i+1;
    int end = n-1;
    while(start<end){
    int sum = nums[i]+nums[start]+nums[end];
    if(abs(target-sum)<abs(target-result)){
        result = sum;
    }
    if(sum==target) return target;
    else if(sum<target) start++;
    else{
        end--;
    }
    }
    }

return result;
    
        
    }
};