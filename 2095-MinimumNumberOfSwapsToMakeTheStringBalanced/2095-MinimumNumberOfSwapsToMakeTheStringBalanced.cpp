// Last updated: 8/4/2026, 12:55:18 AM
class Solution {
public:
    int minSwaps(string s) {
        int balance = 0, swaps = 0;
        for(char c:s){
            if(c=='['){
                balance++;
            }
            else{
                balance--;
            }

            if(balance<0){
                swaps++;
                balance = 1;
            }
        }
        return swaps;
    }
    
};