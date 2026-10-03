class Solution {
public:
    bool detectCapitalUse(string word) {

        bool allUpper = true;
        bool allLower = true;
        bool firstUpper = true;

        // Check all uppercase
        for(int i = 0; i < word.size(); i++) {
            if(!isupper(word[i]))
                allUpper = false;
        }

        // Check all lowercase
        for(int i = 0; i < word.size(); i++) {
            if(!islower(word[i]))
                allLower = false;
        }

        // Check first uppercase and rest lowercase
        if(!isupper(word[0]))
            firstUpper = false;

        for(int i = 1; i < word.size(); i++) {
            if(isupper(word[i]))
                firstUpper = false;
        }

        return allUpper || allLower || firstUpper;
    }
};