// Last updated: 8/28/2025, 9:17:45 PM
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
         vector<int> matrix2;

        int top, right, bottom, left;
        top = 0;
        right = m - 1;
        bottom = n - 1;
        left = 0;
        while (top <= bottom && left <= right) {
            for(int i=left;i<=right;i++){
                matrix2.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                matrix2.push_back(matrix[i][right]);
            }
            right--;

            if(top<=bottom){
                for(int i=right;i>=left;i--){
                matrix2.push_back(matrix[bottom][i]);
            }
            bottom--;
            }

            if(left<=right){
                for(int i=bottom;i>=top;i--){
                matrix2.push_back(matrix[i][left]);
            }

            left++;
            }


            

            
            
        }
        return matrix2;
    }
};