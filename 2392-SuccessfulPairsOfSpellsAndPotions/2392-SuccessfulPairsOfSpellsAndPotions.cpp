// Last updated: 8/4/2026, 12:55:02 AM
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
    vector<int> ans;

    sort(potions.begin(), potions.end());
    int m = potions.size();
    for(int i=0;i<spells.size();i++){
        int l = 0;
        int r = m-1;
        int idx = m;
        while(l<=r){
            int mid = (l+r)/2;

            if((long long)spells[i]*potions[mid] >= success){
                idx = mid;
                r = mid-1;

            }
            else{
                l = mid+1;
            }
        }
        ans.push_back(m-idx);
    }
    return ans;
}
};