// Last updated: 8/4/2026, 12:59:58 AM
class Solution {
public:
    string removeKdigits(string num, int k) {
        string result = ""; // will act like a stack only

        int n = num.length();
        //stack<int>st;

        for(int i=0;i<n;i++){
            while(result.length() > 0 && result.back()>num[i] && k>0 ){
                result.pop_back();
                k--;
            }
            if(result.length() >0 || num[i]!='0'){
            result.push_back(num[i]);
            }

        }
        while(k>0 && !result.empty()){
            result.pop_back();
            k--;
        }
        if(result == ""){
            return "0";
        }

        return result;
        
    }
};