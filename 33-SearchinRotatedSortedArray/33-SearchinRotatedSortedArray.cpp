// Last updated: 8/19/2025, 2:46:32 PM
class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        int first = -1;
        int last = -1;
        int mid;
        int ar[2];
        while(start<=end){
            mid = end +(start-end)/2;
            if(arr[mid]==target){
                first = mid;
                end = mid-1;

            }
            else if(arr[mid]>target){
                end = mid -1;
            }
            else{
                start = mid+1;
            }
        }


        start =0;
        end = n-1;
        while(start<=end){
            mid = end +(start-end)/2;
            if(arr[mid]==target){
                last = mid;
                start = mid+1;

            }
            else if(arr[mid]>target){
                end = mid -1;
            }
            else{
                start = mid+1;
            }
        }
        vector<int> a(2);
        a[0]=first;
        a[1]=last;
        return a;
    }
};