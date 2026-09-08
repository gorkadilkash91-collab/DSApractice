class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size(); // yeh wala doston se jhelp leker kia hai muje hasing acche se krkr yeh wala bapus solve rkna hai
        map<int, int> mp;
        vector<int> ans;

        for(int x : nums) {
            mp[x]++;
        }

        for(int i = 1; i <= n; i++) {
            if(mp[i] == 0) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};