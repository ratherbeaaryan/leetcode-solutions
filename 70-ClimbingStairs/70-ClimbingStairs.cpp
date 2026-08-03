// Last updated: 8/4/2026, 1:03:31 AM
class Solution {
public:
/*int climbStairs(int n, unordered_map<int,int> memo){
    if(n==1 || n==0){
        return 1;
    }
    if(memo.find(n) == memo.end()){
        memo[n] = climbStairs(n-1,memo) + climbStairs(n-2,memo);

    }
    return memo[n];
}*/

int climbStairs(int n , vector<int> &dp){
    if(n==1 || n==0){
        return 1;
    }
    if(dp[n] == -1){
        dp[n] = climbStairs(n-1,dp) + climbStairs(n-2,dp);
    }
    return dp[n];
}
    int climbStairs(int n) {
        //unordered_map<int,int> memo;
        vector<int> dp(n+1,-1);
        return climbStairs(n, dp);
        

    }
};