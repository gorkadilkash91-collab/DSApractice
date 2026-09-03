class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int duplicates = 0;
        int lastindex = arr.size() - 1;
        for (int i = 0; i <= lastindex - duplicates; i++) {
            if (arr[i ] == 0) {
                // edge case
                if (i == lastindex - duplicates) {
                    arr[lastindex] = 0;
                    lastindex-=1;
                    break;
                }
                duplicates++;
            }
        }
        int nayalastindex = lastindex - duplicates;
        for( int i =nayalastindex ; i>=0; i--){
            if(arr[i]==0){
                arr[i+duplicates]=0;
                duplicates--;
                arr[i+duplicates]=0;
            }
            else{
                arr[i+duplicates]= arr[i];
            }
        }
    }
};