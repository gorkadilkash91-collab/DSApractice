class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string prefix = strs[0];
        string last = strs[strs.size() - 1];
        
        for (int i = 0; i < min(prefix.size(), last.size()); i++) {

            if (prefix[i] != last[i]) {

                prefix.resize(i);

                break;
            }
        }

        return prefix;
    }
};