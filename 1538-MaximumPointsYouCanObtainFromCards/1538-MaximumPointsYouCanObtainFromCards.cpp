// Last updated: 8/1/2025, 11:39:35 PM
class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int lsum=0,rsum=0,maxsum=0,n=arr.size();
        int r=n-1;
        for(int i=0;i<k;i++){
            lsum=lsum+arr[i];
            maxsum=lsum;

        }
        
        for(int i=k-1;i>=0;i--){
            lsum=lsum-arr[i];
            rsum=rsum+arr[r];
            r=r-1;
        
        maxsum=max(maxsum,lsum+rsum);
        }
    return maxsum;
    }
};