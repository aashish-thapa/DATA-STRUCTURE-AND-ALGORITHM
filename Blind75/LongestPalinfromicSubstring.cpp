class Solution {
public:
    bool isPalindrome(string& s, int i, int j){
        while(i < j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }


    string longestPalindrome(string s) {
        int start = 0;
        int maxLength = 1;
        int size = s.size();
        for(int i = 0; i < size; i++){
            for(int j = i; j < size ; j++){
                if(isPalindrome(s, i , j) && j - i + 1 > maxLength){
                    start = i;
                    maxLength = j - i + 1;
                }
            }

        }
        return s.substr(start, maxLength);
        
    }
};
