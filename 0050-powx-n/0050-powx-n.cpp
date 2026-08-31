class Solution {
public:
    double myPow(double x, int n) {

        // toh agar es q ko normally krne gye toh ussai nhi ho payega humko n ko
        // n/2 wale process se krna padega samje esmai binary exponential wala
        // conecpet lagega eslia es q ke lia video dekhna pdha

        // yeh neeche wali lines buss values ko update krne ke lia hai agar humko yeh mile toph hume yeh dalna hai q ke according
        if( n==0) return 1.0;
        if ( x==0 ) return 0.0;
        if( x==1) return 1.0; 
        if (x == -1 && n%2 ==0) return 1.0;
          if (x == -1 && n%2 !=0) return -1.0;
        
        
        long binform = n; // yeh binform kuch hai nhi bss n h hai
        if (n < 0) {
            x = 1 / x;
            binform = -binform;
        }
        double ans = 1;
        while (binform > 0) {
            if (binform % 2 == 1) {
                ans *= x; // yeh ans ka value update krdega
            }
            x *= x; // yeh x square dega
            binform /= 2;
        }
        return ans;
    }
};