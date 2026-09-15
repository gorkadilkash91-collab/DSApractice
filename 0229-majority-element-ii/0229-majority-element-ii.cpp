class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        int maj1 = 0, maj2 = 0;

        int count1 = 0, count2 = 0;

        // Find possible candidates

        for (int i = 0; i < n; i++) {

            if (nums[i] == maj1) {

                count1++;

            }

            else if (nums[i] == maj2) {

                count2++;

            }

            else if (count1 == 0) {

                maj1 = nums[i];

                count1 = 1;

            }

            else if (count2 == 0) {

                maj2 = nums[i];

                count2 = 1;

            }

            else {

                count1--;

                count2--;
            }
        }
        vector<int> res;
        int ele1 = 0 ;
        int ele2 = 0;
        for (int& num : nums) {
            if (num == maj1) {
                ele1++;
            } else if (num == maj2) {
                ele2++;
            }
        }


        if (ele1 > n / 3)

            res.push_back(maj1);

        if (ele2 > n / 3)

            res.push_back(maj2);

        return res;
    }
};