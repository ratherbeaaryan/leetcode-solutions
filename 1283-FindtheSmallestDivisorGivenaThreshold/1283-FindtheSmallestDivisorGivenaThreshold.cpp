// Last updated: 8/21/2025, 2:50:52 PM
class Solution {
public:
    int sumD(vector<int>& arr,int div){
        int n = arr.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += ceil((double)arr[i]/(double)div);

        }
        return sum;

    }



    int smallestDivisor(vector<int>& nums, int th) {
        int n = nums.size();
        int start = 1;
        int end = *max_element(nums.begin(),nums.end());
        while(start<=end){
            int mid = end +(start-end)/2;
            if(sumD(nums,mid)<=th){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return start;


        
    }
};