// Last updated: 9/27/2025, 1:02:44 AM
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int start = 0;
        int end = n;

        while(start<=end){
            int mid = start+(end-start)/2;
            int val = guess(mid);

            if(val==0){
                return mid;
            }else if(val == -1){
                end = mid-1;
            }
            else{
                start = mid+1;
            }

        }
        return -1;
        
        
       
    }
};