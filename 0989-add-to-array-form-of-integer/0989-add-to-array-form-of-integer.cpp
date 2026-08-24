class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {

        int i = num.size() - 1;
        vector<int> ans;
        while (i >= 0 || k > 0) {
            int sum = k % 10;

            if (i >= 0) {

                sum += num[i];

                i--;
            }
            ans.push_back(sum % 10);
            k = k / 10 + sum /10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};