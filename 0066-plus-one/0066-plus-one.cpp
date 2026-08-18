class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size();
        
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            } else {
                digits[i] = 0;
            }
        }
        
        // yaha pahunche matlab saare digits 9 the (jaise 999 -> 1000)
        vector<int> result;
        result.push_back(1);              // sabse पहले 1 daal do
        for (int i = 0; i < n; i++) {
            result.push_back(0);          // baaki sab jagah 0 daal do
        }
        return result;
    }
};