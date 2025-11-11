// Last updated: 11/11/2025, 10:51:11 AM
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m = nums2.size();
        vector<int> result(n);

        for(int i = 0; i < n; i++){
            int j = 0;

            // Find nums1[i] in nums2
            while(j < m && nums2[j] != nums1[i]){
                j++;
            }

            // Now j is the index of nums1[i] in nums2
            int nextGreater = -1;
            for(int k = j + 1; k < m; k++){
                if(nums2[k] > nums1[i]){
                    nextGreater = nums2[k];
                    break;
                }
            }

            result[i] = nextGreater;
        }

        return result;
    }
};
