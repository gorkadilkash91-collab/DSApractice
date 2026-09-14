class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // // like what if we see  start and end with 1 and 1 usko middle ke agle
        // // if mnumsrows =5
        // // C(4,0) = 1
        // // C(4,1) = 4
        // // C(4,2) = 6
        // // C(4,3) = 4
        // // C(4,4) = 1
        // // 5th line = 1 4 6 4 1

        // vector<vector<int>> ans;
        // for (int row = 1; row < numRows;
        //      row++) { // decidng which row we are trying to build like if
        //               // numrows =5 row = 0 first row ko zero mann rhe hai
        //               // row = 1
        //               // row = 2
        //               // row = 3
        //               // row = 4
        //     vector<int> currentRow;
        //     long long value = 1; // har pascal ka starting 1 eslia
        //     for (int col = 1; col <= row;
        //          col++) { // handling col elemennt in row if row = 3
        //                   //col = 0
        //                   // col = 1
        //                   // col = 2
        //                   // col = 3 i.e col <= row

        //         currentRow.push_back(value);

        //         value = value * (row - col) / (col + 1);
        //     }

        //     ans.push_back(currentRow);
        // }

        // return ans;'
       vector<vector<int>> result(numRows); // result ka 2d array jisme numrows empty rows hai
 
        for( int i =0; i<numRows; i++){
            result[i]= vector<int>(i+1 ,1);
            for(int j =1; j<i;j++){
                result[i][j] = result [i-1][j] + result [i-1][j-1];

            }
        }
        return result;
    }
};
