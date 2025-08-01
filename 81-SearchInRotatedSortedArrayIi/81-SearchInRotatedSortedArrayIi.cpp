// Last updated: 8/1/2025, 11:40:35 PM
class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int mid,start=0,end=arr.size()-1;
        while(start<=end){
            mid=end+(start-end)/2;
            if(arr[mid]==target){
                return 1;
            }
            if(arr[mid]==arr[start] && arr[mid]==arr[end])
            {
                start++;
                end--;
                continue;
            }
            else if(arr[mid]>=arr[start]){
                if(arr[mid]>target && arr[start]<=target){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            else{
                if(arr[mid]<target && arr[end]>=target){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return 0;
    }
};