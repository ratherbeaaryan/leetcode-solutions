// Last updated: 8/4/2026, 12:54:05 AM
class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n = nums.size();
        int c = a/b;
        int ceven = 0;
        int codd = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            codd = 0;
            ceven = 0;
            for(int j=i;j<n;j++){
                if(nums[j]%2 == 0){
                    ceven++;
                }
                else{
                    codd++;
                }
                if(codd > 0 && (1LL * ceven*b) <= (1LL *codd*a)){
                    count++;
                }
                
                
            }
        }
        return count;
        
        
    }
};