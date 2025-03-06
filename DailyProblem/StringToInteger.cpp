#include <iostream>
using namespace std;
class Solution{
    public:
    int atoi(string s){
        int sign = 1;
        long result = 0;
        int i = 0, n = s.size();
        while(i < n && s[i] == ' '){
            i++;
        }
        if(i < n && (s[i] == '+' || s[i] == '-')){
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        while( i < n && isdigit(s[i])){
            result = result * 10 + (s[i] - '0');
            i++;
        }
        return result * sign;
    }
}