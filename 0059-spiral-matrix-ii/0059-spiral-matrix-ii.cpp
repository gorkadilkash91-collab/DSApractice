class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
          
        vector<vector<int>> matrix(n, vector<int>(n));
        int top = 0;
        int right = n - 1;
        int bottom = n - 1;
        int left = 0;
        int num=1;


        while (left <= right && top <= bottom) {

            // printing the top
            for (int j = left; j <= right; j++) {
                matrix[top][j]= num;
                num++;
            }
            top++;
            // priinting the right
            for (int i = top; i <= bottom; i++) {
                matrix[i][right]=num;
                num++;
            }
                right--;

            // print bottom
            if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    matrix[bottom][j]=num;
                    num++;
                }
                    bottom--;
            }
            // print left
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    matrix[i][left]=num;
                    num++;
                }
                    left++;
            }
        }
        return matrix;
    }
};

        

   