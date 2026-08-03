// Last updated: 8/4/2026, 12:57:50 AM
class Solution {
public:
    int minAddToMakeValid(string s) {
        string s1 = "";
        int n = s.size();
        int extra = 0;
        for(int i=0;i<n;i++){
            
            if(s[i]=='('){
                s1.push_back(s[i]);
            }
            else if(s[i]==')'){
                if(s1.size()==0){
                    extra++;
                }
                else{
                s1.pop_back();
                }

            }
        }
        return s1.size()+extra;
        
    }
};