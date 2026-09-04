class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        // we need to remove the element that is duplicate but we also have to position the next not duplicate elemnt in that index so 

        int i =1;
        for(int j=1; j<n; j++){
            if(nums[j-1]!= nums[j]){
                nums[i]= nums[j];
                i++;
            }
        }
        return i;
        
    }
};