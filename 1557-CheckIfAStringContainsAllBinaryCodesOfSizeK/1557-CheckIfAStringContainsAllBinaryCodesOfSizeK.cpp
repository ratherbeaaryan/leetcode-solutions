// Last updated: 8/4/2026, 12:56:35 AM
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        
        unordered_set<string> st;
        int n = s.size();
        for(int i=0;i<=n-k;i++){
            st.insert(s.substr(i,k));

        }
        return st.size() == pow(2, k);


        
        
    }
};