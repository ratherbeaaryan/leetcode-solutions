// Last updated: 8/1/2025, 11:40:40 PM
class Solution {
public:
    int mySqrt(int x) {
        if(x<2){
            return x;
        }
        int mid,start=0,end=x,ans=0;
        while(start<=end){
            mid= end+(start-end)/2;
            if(mid==x/mid){
                ans=mid;
                break;
            }

            else if(mid<x/mid){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
        }
};
        
