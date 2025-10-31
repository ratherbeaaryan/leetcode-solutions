// Last updated: 10/31/2025, 2:12:34 PM
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
    int n = asteroids.size();
    stack<int>st;
    vector<int> result;
    for(int i=0;i<n;i++){
        if(asteroids[i]>0) st.push(asteroids[i]);
        else{
            while(!st.empty()&& st.top()>0 && abs(asteroids[i]) > st.top()) st.pop();
            if(!st.empty() && abs(asteroids[i])==st.top()) st.pop();
            else if(st.empty() || st.top()<0){
                st.push(asteroids[i]);

            }
        }

    }

    while(st.size()){
        result.push_back(st.top());
        st.pop();

    }
    reverse(begin(result),end(result));
    return result;
    }
};