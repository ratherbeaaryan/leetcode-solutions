// Last updated: 8/4/2026, 12:54:59 AM
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