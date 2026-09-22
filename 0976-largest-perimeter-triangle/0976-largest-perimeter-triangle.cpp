class Solution {
public:
    int largestPerimeter(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = n - 1; i >= 2; i--) {
            int Largest = nums[i];

            int secondLargest = nums[i - 1];
            int thirdLargest = nums[i - 2];

            if (secondLargest + thirdLargest > Largest)
                return Largest + secondLargest + thirdLargest;
        }
        return 0;
    }
};