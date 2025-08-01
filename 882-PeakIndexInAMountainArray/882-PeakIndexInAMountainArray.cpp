// Last updated: 8/1/2025, 11:39:48 PM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0,mid,end=arr.size(),index=-1;
        while(start<=end){
            mid= end + (start-end)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                return mid;
            }
            else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }

        }
        return -1;
        
    }
};