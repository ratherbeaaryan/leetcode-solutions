// Last updated: 8/1/2025, 11:39:56 PM
class Solution {
public:
int expand(string s , int i , int j){
    int count = 0;
    while(i >= 0 && j < s.size() && s[i]==s[j]){
        {
            count++;
            i--;
            j++;
        }
        
    }
    return count;
    

}
    int countSubstrings(string s) {
        int tcount = 0 ;
        
        //odd sum
        for(int center =0; center < s.size(); center ++){
        int oddsum = expand(s, center, center);

        // even sum
        int evensum = expand(s, center, center +1);

         tcount = tcount + oddsum + evensum;
        }
        
    return tcount;
    }
};