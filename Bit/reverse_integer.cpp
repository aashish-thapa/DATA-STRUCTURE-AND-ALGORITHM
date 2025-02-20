#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
class Solution{
    public:
    int reverse(int x){
        int result = 0;
        while(x != 0){
            int rem = x % 10;
            if(result >  INT_MAX || (result == __INT_MAX__ && rem > 7)) return 0;
            if(result < INT_MIN || (result == INT_MIN && rem < -8)) return 0;
            result = result * 10 + rem;
            x /= 10;
        }
        return result;
    }
};
int main(){
    Solution s1;
    int x = 222;
    cout << s1.reverse(x);
    return 0;
}