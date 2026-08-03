// Last updated: 8/4/2026, 12:55:31 AM
class Solution {
public:
    int minFlips(string s) {
        if(s.size() < 2)
            return 0;

        int n = s.size();
        s += s;

        int ans = INT_MAX;
        int d = 0;

        for(int i = 0; i < s.size(); i++)
        {
            char expected;

            if(i % 2 == 0)
                expected = '0';
            else
                expected = '1';

            if(s[i] != expected)
                d++;

            if(i >= n)
            {
                char leftExpected;

                if((i - n) % 2 == 0)
                    leftExpected = '0';
                else
                    leftExpected = '1';

                if(s[i - n] != leftExpected)
                    d--;
            }

            if(i >= n - 1)
            {
                ans = min(ans, min(d, n - d));
            }
        }

        return ans;
    }
};