// Last updated: 10/24/2025, 11:51:23 PM
class Solution {
public:
    string removeStars(string s) {
        stack<int> st;
        int n = s.size();
        string result = "";

        for(int i=0;i<n;i++){
            if(s[i]== '*'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }

        }

        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(begin(result),end(result));

        return result;
        
        
    }
};