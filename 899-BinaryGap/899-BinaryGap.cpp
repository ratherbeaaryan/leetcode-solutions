// Last updated: 8/4/2026, 12:58:03 AM
class Solution {
public:
    int binaryGap(int n) {
        int count = 0;
        int lastindex = -1;
        int index = 0;

        while(n > 0) {

            if(n & 1) {
                if(lastindex != -1) {
                    count = max(count, index - lastindex);
                }
                lastindex = index;
            }

            n >>= 1;      // shift every time
            index++;      // move index every time
        }

        return count;
    }
};