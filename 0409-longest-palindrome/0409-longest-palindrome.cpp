class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> lower(26, 0), upper(26, 0);
        for (int i = 0; i < s.size(); i++) {
            // for frequency updating if we found upper case and lower case than
            // we need to do this
            if (s[i] >= 'a')
                lower[s[i] - 'a']++;

            else
                upper[s[i] - 'A']++;
        }
        int count = 0;
        bool odd = 0;
        for (int i = 0; i < 26; i++) {
            // lower case
            if (lower[i] % 2 ==
                0) { // agar even case hai toh simply return krdeinge
                count += lower[i];
            }

            else {
                count += lower[i] - 1;
                //. agar odd case hai toh usme se ekh "-" krdeinge aur odd ko 1
                //bejh deinge  same for upper case
                odd = 1;
            }
            // upper case

            if (upper[i] % 2 == 0) {
                count += upper[i];
            }

            else {
                count += upper[i] - 1;
                odd = 1;
            }
        }
        return count + odd;
    }
};