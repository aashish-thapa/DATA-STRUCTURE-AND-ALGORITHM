#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
        int PlusOne(vector<int> digits){
            for(int i = digits.size() - 1; i >= 0; i++){
                digits[i]++;
                digits[i]%=10;
                if(digits[i] == 0){
                    return digits;
                }
            }
            return 
        }
};