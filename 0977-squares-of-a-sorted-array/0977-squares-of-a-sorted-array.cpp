class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = nums[i] * nums[i];   // har number ko usi jagah square kar do
        }
        
        sort(nums.begin(), nums.end());    // fir sort kar do
        
        return nums;
    }
};