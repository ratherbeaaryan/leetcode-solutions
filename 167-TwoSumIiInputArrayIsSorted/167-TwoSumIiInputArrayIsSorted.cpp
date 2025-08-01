// Last updated: 8/1/2025, 11:40:24 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int start=0, end=arr.size()-1;
        while(start<=end){
            if(arr[start]+arr[end]==target){
                break;
            }
            else if(arr[start]+arr[end]>target){
                end--;
            }
            else{
                start++;
            }
        } 
        return {start+1,end+1};
        
    }
};