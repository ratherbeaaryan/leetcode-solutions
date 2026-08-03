// Last updated: 8/4/2026, 1:01:20 AM
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];

        vector<int> t(n + 1, 0);

        // Case 1: houses [0 ... n-2]
        for (int i = 1; i <= n - 1; i++) {
            int steal = nums[i - 1] + (i - 2 >= 0 ? t[i - 2] : 0);
            int skip  = t[i - 1];
            t[i] = max(skip, steal);
        }
        int result1 = t[n - 1];

        // Reset DP array properly
        t.assign(n + 1, 0);

        // Case 2: houses [1 ... n-1]
        for (int i = 2; i <= n; i++) {
            int steal = nums[i - 1] + t[i - 2];
            int skip  = t[i - 1];
            t[i] = max(steal, skip);
        }
        int result2 = t[n];

        return max(result1, result2);
    }
};


/**
class Solution {
public:
int t[101];

int solve(vector<int> &nums, int i,int end){
    if (i >= end) return 0;
    if(t[i]!=-1){
        return t[i];
    }

    int steal = nums[i] + solve(nums,i+2,end);
    int skip = solve(nums,i+1,end);

    return t[i] = max(steal,skip);
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        memset(t,-1,sizeof(t));

        int a = solve(nums,0,n-1);
        memset(t,-1,sizeof(t));
        int b = solve(nums,1,n);


        return max(a,b);

    }
};
*/