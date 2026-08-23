class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        int unqele = 0;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] == nums[i]) {
                    count++;
                }
            }
            if (count == 1) {
                unqele += nums[i];
            }
        }
        return unqele;
    }
};