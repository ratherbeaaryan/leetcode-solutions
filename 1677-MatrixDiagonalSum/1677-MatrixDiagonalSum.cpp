// Last updated: 8/1/2025, 11:39:34 PM
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n= mat.size();
        int ans=0;
        if(n%2==0){
        for(int i=0;i<n;i++){
            ans=ans+mat[i][i];
            ans=ans+mat[i][n-1-i];
        }
        }
        else{
            for(int i=0;i<n;i++){
            ans=ans+mat[i][i];
            ans=ans+mat[i][n-1-i];
            }
            ans=ans-mat[n/2][n/2];
        }
        return ans;
        
    }
};