class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = 1;
        while (start<n &&  end<n) {
            if (nums[start] % 2 == 0) {
                start+=2;
            } else if (nums[end] % 2 == 1) {
                end+=2;
                

            } else {
                swap(nums[start], nums[end]);
                start+=2;
                end+=2;
            }
        }
        return nums;
    }
};