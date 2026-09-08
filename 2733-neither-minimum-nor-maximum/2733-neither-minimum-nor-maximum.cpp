class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++) {
            if(nums[i] != nums[0] && nums[i] != nums[n - 1]) {
                return nums[i];
            }
        }

        return -1;
    }
};