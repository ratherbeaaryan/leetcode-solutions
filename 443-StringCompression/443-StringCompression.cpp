// Last updated: 9/3/2025, 1:41:10 AM
class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index = 0;
        int i = 0;
        while(i<n){
            char curr = chars[i];
            int  count = 0;
        
        while(i<n && chars[i] == curr){
            count++;
            i++;

        }
        chars[index] = curr;
        index++;
        

        if(count >1){
            string count_str = to_string(count);

            for(char &ch : count_str){
                chars[index] = ch;
                index++;
            }
        }
        }
        return index;
        
    }
};