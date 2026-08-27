class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        int lp = 0;
        int rp = height.size() - 1;

        while (lp < rp) {
            int width = rp - lp;
            int minHeight = min(height[lp], height[rp]);

            int currentwater = minHeight * width;
            maxwater = max(maxwater, currentwater);

            if (height[lp] < height[rp]) {
                lp++;
            }
            else {
                rp--;
            }
        }

        return maxwater;
    }
};