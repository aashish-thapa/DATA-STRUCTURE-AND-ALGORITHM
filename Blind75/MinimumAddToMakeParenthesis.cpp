class Solution {
    public:
        int minAddToMakeValid(string s) {
            int openCnt = 0;
            int closeCnt = 0;
            for(char c : s){
                if(c == '('){
                    openCnt++;
                }
                else if(c == ')'){
                    if(openCnt > 0){
                        openCnt--;
                    }
                    else{
                        closeCnt++;
                    }
                }
            }
            return openCnt + closeCnt;
            
        }
    };