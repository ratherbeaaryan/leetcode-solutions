// Last updated: 8/1/2025, 11:40:14 PM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(), col= matrix[0].size();
        int i=0,j=col-1;
        while(i<row && j>=0){
            if(matrix[i][j]==target){
                return 1;
            }
            else if(matrix[i][j]<target){
                i++;
            }
            else{
                j--;
            }
            
        
        }
        
        
    return false;
    }
    
};