class Solution{
    public:
        long long swap(string& s){
            long long swapCount = 0;
            int zeroPos = 0;
            for(int i = 0; i < s.size; i++){
                if(s[i] == '0'){
                    swapCount += i - zeroPos;
                    zeroPos++;
                }
            }
            return swapCount;
        }
};