class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        int multiple = k;
        while (true) {

            bool found = false;

            for (int i = 0; i < n; i++) {

                if (nums[i] == multiple) {
                    found = true;

                    break;
                }
            }
            if (found == false) {

                return multiple;
            }

            multiple = multiple + k;
        }
    }
};