class Solution {
public:
    int strStr(string haystack, string needle) {
        int rightPnter =  needle.size();
        for(int i = 0; i < haystack.size(); i++){
            string compare = haystack.substr(i, rightPnter);
            if(compare == needle){
                return i;
            }
            
        }
        return -1;
    }
};