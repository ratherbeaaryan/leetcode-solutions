// Last updated: 8/1/2025, 11:39:38 PM
class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        int index = 0;

        while (index < address.size()) {
            if (address[index] == '.')
                ans += "[.]";
            else 
            ans += address[index];
                index++;
            
        }
        return ans;
    }
};