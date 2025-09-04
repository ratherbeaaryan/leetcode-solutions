// Last updated: 9/4/2025, 11:09:37 AM
class Solution {
public:
    int findClosest(int x, int y, int z) {
        int a = z-y;
        int b = z-x;
        int ans;
        if(a<0){
            a=-a;
            }
        if(b<0){
            b=-b;
            }

        if(b<a){
            ans = 1;
        }
        if(a<b){
            ans = 2;
        }
        if(a==b){
            ans = 0;
        }
        return ans;
        
    }
};