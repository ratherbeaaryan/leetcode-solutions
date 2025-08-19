// Last updated: 8/19/2025, 3:10:18 PM
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=0;
        int h = n;
        while(l<=h){
            int mid = h +(l-h)/2;
            if(isBadVersion(mid)) h = mid-1;
            else{
                l = mid+1;
            }
        }
        return l;
        
        
    }
};