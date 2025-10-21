// Last updated: 10/22/2025, 1:12:53 AM
class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int number = 0;
        int result = 0;
        int sign = 1;

        int n = s.size();

        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                number = number*10 + (s[i]-'0');

            }
            else if(s[i]=='+'){
                result = result + (number*sign);
                number = 0;
                sign = 1;

            }
            else if(s[i]=='-'){
                result = result + (number*sign);
                number = 0;
                sign = -1;

            }
            else if(s[i]=='('){
                st.push(result);
                st.push(sign);
                number = 0;
                result = 0;
                sign = 1;

            }
            else if(s[i]==')'){
                result  += (number*sign);
                number = 0;
                result *= st.top();
                st.pop();
                result += st.top();
                st.pop();

            }
        }
        result += (number*sign);
        return result;
        
    }
};