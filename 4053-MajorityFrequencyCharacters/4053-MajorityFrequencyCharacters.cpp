// Last updated: 8/4/2026, 12:54:21 AM
class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char,int> freq;
        for(char c:s){
            freq[c]++;

            
        }

        unordered_map<int,string> groups;
        for(auto &p:freq){
            groups[p.second]+=p.first;

            
        }

        int bsize = 0;
        int bfreq= 0;
        string ans;
        for(auto &g:groups){
            if(g.second.size()>bsize || (g.second.size()==bsize  && g.first>bfreq )){
                bsize = g.second.size();
                bfreq = g.first;
                ans=g.second;
                
            }
        }
        return ans;
    }
};