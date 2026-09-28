class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int parenthesis =0;
        for(int i=0; i<s.size(); i++){
            if(s[i]== '(')
            parenthesis++;
            if(parenthesis > count)
            count = parenthesis;

            if(s[i]==')'){
                parenthesis--;
            }
        }
        return count;

   }
};