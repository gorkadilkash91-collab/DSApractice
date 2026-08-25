class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
         int i;
        for(i =0; i<arr.size(); i++){
            if(arr[i]==0){
                arr.insert(arr.begin()+i+1,0);
                arr.pop_back();
                i++;
            }
        }
        
        
    }
};