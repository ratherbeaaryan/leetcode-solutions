// Last updated: 8/4/2026, 12:58:06 AM
class Solution {
public:
    bool lemonadeChange(vector<int>& arr) {
        int five = 0;
        int ten = 0;
        int twenty = 0;

        for(int i=0;i<arr.size() ; i++){
            if(arr[i] == 5){
                five += 1;

            }
            else if(arr[i] == 10){
                if(five){
                    five-=1;
                    ten+=1;
                }
                else{
                    return false;
                }


            }
            else{
                if(five && ten){
                    five-=1;
                    ten-=1;
                }
                else if(five >=3){
                    five-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};