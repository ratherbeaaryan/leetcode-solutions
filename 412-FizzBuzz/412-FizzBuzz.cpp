// Last updated: 8/1/2025, 11:40:00 PM
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for(int i=1;i<n+1;i++){
            if(i%3==0 & i%5==0){
                result.push_back("FizzBuzz");
            }
            else if(i%3==0){
                result.push_back("Fizz");
            }
            else if(i%5==0){
                result.push_back("Buzz");
            }
            else{
                
                result.push_back(to_string(i));
            }
        }
        return result;
        
    }
};