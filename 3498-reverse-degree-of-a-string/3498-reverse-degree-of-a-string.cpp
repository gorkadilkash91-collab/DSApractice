class Solution {
public:
    int reverseDegree(string s) {
       
        int sum =0;
        for( int i= 0; i<s.size(); i++){
            int freq= s[i]-'a'+1;
            int reverse =  27-freq;
                sum += reverse * (i+1); // we took 
            }

        
        return sum;
        
        
    }
};