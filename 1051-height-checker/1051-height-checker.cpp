class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights; // idka mtlb hai ki humne ekh heights  name ke vector ki copy bna kr uska name expected rakh dia hai ... 
        sort(heights.begin(), heights.end()); // soprt krdia
        int count = 0; /// check kia ki expected aur aur given vale match kri ki nhi sort krne ke lia eslia count ka variable lena pdha ekh 
        for (int i = 0; i < heights.size(); i++) { // traverse krdia 
            if (heights[i] != expected[i]) { // iske bina case run nhi krega 
                count++; // oh yes 
            }
        }
        return count;
    }
};