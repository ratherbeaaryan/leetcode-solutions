// Last updated: 8/19/2025, 2:21:04 PM
class Solution {
public:
    int search(vector<int>& arr, int target) {
        int mid,start=0,end=arr.size()-1;
        while(start<=end){
            mid= end+(start-end)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]>arr[start]){
                if(target < arr[mid] && target >= arr[start]){
                end=mid-1;

                }
                else{
                start=mid+1;
                }
            }
            else{
                if(target > arr[mid] && target <= arr[end]){
                start=mid+1;

                }
                else{
                end=mid-1;
                }
            }
            
        }
        return -1;

        
    }
};