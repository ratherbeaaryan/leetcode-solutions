// Last updated: 8/1/2025, 11:39:29 PM
class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part)!= string::npos){
            // if inside loop it means it exists in string s.
            s.erase(s.find(part),part.size());

        }
        return s;
        
    }
};