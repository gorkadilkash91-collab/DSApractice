class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int count = 0;

        // Step 1: trailing spaces skip krdia jissai humara last se string count
        // krne se pehle woh trailing soace hat jaiga "hello world  "  like this
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Step 2: last word count karo
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};