// Last updated: 8/4/2026, 12:54:07 AM
class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        vector< long long> pref(tasks.size());
        pref[0] = tasks[0];
        for(int i=1;i<tasks.size();i++){
            pref[i] = pref[i-1] + tasks[i];
        }

        long long total = pref[tasks.size()-1];
        long long done = 0;
        vector<int> ans;

        for(int t : shifts){
            done += t;

            if(done >= total){
                ans.push_back(0);
                done = 0;
                
            }
            else{
                int completed = upper_bound(pref.begin(),pref.end(),done) - pref.begin();
                ans.push_back(tasks.size()-completed);
            }
        }
        return ans;
        
    }
};