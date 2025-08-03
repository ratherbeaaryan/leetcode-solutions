// Last updated: 8/4/2025, 1:10:47 AM
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int total = 0;
        int lmax = 0;
        int rmax = 0;
        int l=0;
        int r= n-1;
        while(l<=r){
            if(height[l]<=height[r]){
                if(lmax>height[l]){
                    total += lmax - height[l];
                    }
                else{
                    lmax = height[l];
                }
                l++;
            }
            else{
                if(rmax>height[r]){
                    total += rmax - height[r];
                    }
                else{
                    rmax = height[r];
                }
                r--;
            }
        }
        return total;

        
    }
};