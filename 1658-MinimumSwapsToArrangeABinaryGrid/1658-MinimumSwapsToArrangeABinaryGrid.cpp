// Last updated: 8/4/2026, 12:56:20 AM
class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> endzeros(n,0);
        

        for(int i=0;i<n;i++){
            for(int j=n-1;j>=0;j--){
                if(grid[i][j]==0){
                    endzeros[i]++;
                }
                else{
                    break;
                }

            }

        }

        int steps = 0;
        for(int i=0;i<n;i++){
            int need = n-i-1;
            int j =i;
            while(j < n && need > endzeros[j]){
                j++;
            }
            if(j == n){
                return -1;
            }

            steps+= j-i;
            while(j>i){
                swap(endzeros[j] , endzeros[j-1]);
                j--;
            }

        }
        return steps; 

        
    }
};