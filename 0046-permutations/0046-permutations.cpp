class Solution {
private:
    void solve(vector<int> nums, vector<vector<int>> & ans, int index) {
        // for base case i.e if the index >= 0
        if (index >= nums.size()) {
            ans.push_back(nums);
            return;
        }
        // for the case to find the permutataions
        for (int j = index; j < nums.size(); j++) {
            // we need to swap the index 0 baki case recursion khud krlega
            swap(nums[index], nums[j]);
            solve(nums, ans, index+1);

            // with the help of backtracking
            swap(nums[index], nums[j]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans , index);
        return ans;
    }
};