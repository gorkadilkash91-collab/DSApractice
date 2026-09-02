#include <vector>
using namespace std;

class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int oddCount = 0;
        
        for (int x : nums1) {
            if (x % 2 != 0) {
                oddCount++;
            }
        }

        int n = nums1.size();

        // Case 1: Make all even
        bool makeEven = (oddCount != 1);

        // Case 2: Make all odd
        bool makeOdd = (oddCount >= 1);

        return makeEven || makeOdd;
    }
};

        
  