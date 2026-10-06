class Solution {
public:
    int minAddToMakeValid(string s) {
        int openBrackets = 0;
        int minAddsRequired = 0;
        for(char x : s){
            if (x == '('){
                openBrackets++;
            }
            else if(openBrackets > 0){
                openBrackets--;
            }
            else {
                minAddsRequired++;
            }
        }
        return openBrackets + minAddsRequired;
    }
};

// For loop can also be written 
//          for (size_t i = 0; i < s.length(); ++i){ 
//               char x = s[i];  }
