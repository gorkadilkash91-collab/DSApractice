class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();
        // We swap matrix[i][j] with matrix[j][i]
        // i.e mirror everything across the main diagonal
        //
        //  1 2 3          1 4 7
        //  4 5 6   --->   2 5 8
        //  7 8 9          3 6 9
       // we used tranpose matrix logic here firt we did transpose od the matix and then we did reverse of each row we get the optimal sol
        for (int i = 0; i < n-1 ; i++) {
            for (int j = i + 1; j < n; j++) {
                // j starts from i+1 because:
                // 1. j = i is the diagonal → no need to swap with itself
                // 2. j < i would re-swap already swapped elements → undoes the
                // work
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};