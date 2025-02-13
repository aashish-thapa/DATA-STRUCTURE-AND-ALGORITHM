class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] != ' '){
                count++;
                if(i == 0 || s[i - 1] == ' '){
                    break;
                }
        }
            

        }
        return count;
    }
};