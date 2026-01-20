// Last updated: 1/20/2026, 3:36:15 PM
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int row,col,mid,start=0,end=matrix.size()*matrix[0].size()-1;
5        while(start<=end){
6            mid=end+(start/2-end/2);
7            row=mid/matrix[0].size();
8            col=mid%matrix[0].size();
9
10        if(matrix[row][col]==target){
11            return true;
12        }
13        else if(matrix[row][col]<target){
14            start=mid+1;
15        }
16        else{
17            end=mid-1;
18        }
19
20        }
21
22    return false;  
23        
24    }
25};