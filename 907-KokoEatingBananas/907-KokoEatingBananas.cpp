// Last updated: 8/1/2025, 11:39:46 PM
class Solution {
public:
    int hoursRequired(int mid, vector<int>& piles){

        int ans=0;
        for(int i=0;i<piles.size();i++){
            ans += ceil((double)piles[i] / mid);

        }

        return ans;
        
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int high=INT_MIN;
        
        for(int i=0;i<piles.size();i++){
            high=max(high,piles[i]);
        }

        int low=1;
        while(low<high){
            int mid=(low+high)/2;
            
            if(hoursRequired(mid,piles)>h) low=mid+1;
            else high=mid;
        }

        return low;
        
        
        
    }
};