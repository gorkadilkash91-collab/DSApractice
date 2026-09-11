class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int top = 0;
        int right = col - 1;
        int bottom = row - 1;
        int left = 0;

        while (left <= right && top <= bottom) {

            // printing the top
            for (int j = left; j <= right; j++) {
                ans.push_back(matrix[top][j]);
            }
                top++;
            // priinting the right
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
                right--;

            // print bottom
            if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    ans.push_back(matrix[bottom][j]);
                }
                    bottom--;
            }
            // print left
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                    left++;
            }
        }
        return ans;
    }
};
