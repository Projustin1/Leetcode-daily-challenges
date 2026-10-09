class Solution {
public:
    int minInsertions(string s) {
        int LeftCount = 0;
        int closing = 0;
        int insertions = 0;
        for(int i = 0; i < s.length();){
            char x = s[i];
            if(x == '('){
                LeftCount++;
                i++;
            }
            else{
                if(LeftCount > 0){
                    LeftCount--;
                }
                else{
                    insertions++;
                }
                if(i < s.length() - 1 && s[i+1] == ')'){
                    i +=2;
                }
                else{
                    insertions++;
                    i++;
                }
            }

        } 
        insertions += LeftCount * 2;
        return insertions;
    }
};