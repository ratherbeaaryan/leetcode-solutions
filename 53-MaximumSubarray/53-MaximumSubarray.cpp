// Last updated: 11/19/2025, 10:04:49 AM
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