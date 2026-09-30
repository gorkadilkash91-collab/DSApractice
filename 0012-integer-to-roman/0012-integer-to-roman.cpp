class Solution {
public:
    string intToRoman(int num) {
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string symbols[] = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                        "XL", "X",  "IX", "V",  "IV", "I"};
        string ans = "";
        int index = 0;

        while (num > 0) // — jab tak poora num convert nahi ho jaata (0 nahi ban
                        // jaata), chalte raho. 
                        {
            while (num >= values[index]) {
                ans += symbols[index];
                num -= values[index];
            }
        index++;
    }
    return ans;
}
}
;