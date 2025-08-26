// Last updated: 8/26/2025, 2:07:11 PM
#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        // This check is a good optimization.
        if (s.size() % 2 != 0) {
            return false;
        }

        // Using a stack of 'char' is more semantically correct.
        std::stack<char> p;

        for (const char c : s) {
            // If it's an opening bracket, push it onto the stack.
            // Use single quotes for characters.
            if (c == '(' || c == '{' || c == '[') {
                p.push(c);
            }
            // If it's a closing bracket...
            else {
                // ...first check if the stack is empty. If so, there's no matching opener.
                if (p.empty()) {
                    return false;
                }
                
                // ...if the stack is not empty, check if the top is the matching opener.
                if ((c == ')' && p.top() == '(') ||
                    (c == '}' && p.top() == '{') ||
                    (c == ']' && p.top() == '[')) {
                    p.pop(); // If they match, pop the opener from the stack.
                } else {
                    // If they don't match, the string is invalid.
                    return false;
                }
            }
        }
        // If the stack is empty at the end, all brackets were matched.
        return p.empty();
    }
};