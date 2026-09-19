class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10);
        string temp;
        int count = 0;
        int index = 0;
        while (index < s.size()) {
            if (s[index] == ' ') {
                int position = temp[temp.size() - 1] - '0';
                temp.pop_back();
                ans[position] = temp;
                temp.clear();
                count++;
            } else {
                temp += s[index];
            }

            index++;

            if (index == s.size()) {

                int position = temp[temp.size() - 1] - '0';

                temp.pop_back();

                ans[position] = temp;

                temp.clear();

                count++;
            }
        }
        for (int i = 1; i <= count; i++) {
            temp += ans[i];
            temp += " ";
        }
        temp.pop_back();
        return temp;
    }
};