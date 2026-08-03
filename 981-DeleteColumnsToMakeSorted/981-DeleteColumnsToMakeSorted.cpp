// Last updated: 8/4/2026, 12:57:43 AM
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int k = strs[0].size();
        int count =0;

        for(int i=0;i<k;i++){
            for(int j=1;j<n;j++){
                if(strs[j][i]<strs[j-1][i]){
                    count++;
                    break;
                }

            }
        }
        return count;
        
    }
};