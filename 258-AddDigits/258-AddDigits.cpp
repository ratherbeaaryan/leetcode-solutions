// Last updated: 8/1/2025, 11:40:11 PM
class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int rem,ans=0;
            while(num!=0){
                rem=num%10;
                num/=10;
                ans+=rem;
            }
             num=ans;
        }
        return num;
        
    }
};