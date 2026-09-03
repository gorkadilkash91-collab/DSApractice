class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        // we can also do it wioth this in optimal soln with two pointer apporooach as with sorting it was nlogn 
        int left = 0;
        int right = nums.size() - 1; // indexing of two pointer 

        vector<int> ans(nums.size()); // creating ans array 

        for (int i = nums.size() - 1; i >= 0; i--) { 
            // for loop will start to work from last ans check the possibilities written down 

            if (abs(nums[left]) > abs(nums[right])) {
                ans[i] = nums[left] * nums[left]; // squaring
                left++;  // abs is used so that we can get -3>-1 as we know 9>1 or -2>-1 as 4>1 thats why we used abs for this 
            }
            else {
                ans[i] = nums[right] * nums[right];
                right--;
            }
        }

        return ans;
    }
};