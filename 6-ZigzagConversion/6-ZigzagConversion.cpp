// Last updated: 8/23/2025, 12:31:23 AM
class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        string res = "";
        
        if(s.size()<=1){
            return s;
        }
        if(numRows==1){
            return s;
        }
        int jumps = (numRows-1)*2;
        for(int i=0;i<numRows;i++){
            for(int j=i;j<n;j+=jumps){
                res+= s[j];
                if(i>0 && i<numRows-1 && (j+jumps-2*i)<s.size()){
                    res+=s[j+jumps-2*i];
                }


            }
        }
        return res;
        
        
    }
};