// Last updated: 8/1/2025, 11:40:46 PM
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int arr[n][n],i,j,temp[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
                
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n/2;j++){
                swap(matrix[i][j],matrix[i][n-j-1]);

            }
        }
    }
        
    
};