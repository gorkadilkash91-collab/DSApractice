class Solution {
    private :

    void solve( string digit , string output , int index , vector<string> &ans, string mapping[]){
        // base case 
        if(index>= digit.length()){
            ans.push_back(output);
            return;

        }
        int numbers = digit[index] - '0';  //digit[index] - humko character dega eslia humne use kia usko -0 se taki humko uska int equivalent miljaye wrna 2 nhi milega 
        string value = mapping[numbers];
        // mapping krne ke lia fhir loop lga dia ekh bar a , b ,c lelo 

        for( int i =0; i< value.length(); i++){
            output.push_back(value[i]);
            solve( digit, output , index +1, ans , mapping);
            output.pop_back();

            // bapus jaane ke lia yeh use kia 
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
         if(digits.length()==0){
            return ans;
            // checked if string is empty or not if its emp it will directly return u the ans 
         }
         string output = "";
         int index =0;
         string mapping [10] ={"" ,"","abc", "def", "ghi" , "jkl" , "mno", "pqrs" , "tuv", "wxyz"};
         //2-9 legnth of keys in phone used for mapping 
         solve(digits,output, index ,  ans ,mapping );
         
         return ans;

        
    }
};