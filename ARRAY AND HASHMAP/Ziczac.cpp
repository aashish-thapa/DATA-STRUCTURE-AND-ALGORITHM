#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution{
    public:
    string ziczac(string s , int noofrows){
        string result;
        vector<string> rows(min(noofrows, int(s.size())));
        bool down = false;
        int row = 0;
        for(char c :  s){
            rows[row] += c;
            if(row == 0 || row == noofrows - 1){
                down = !down;
            }
            row += down? 1 : -1;
        }
        for(string s : rows){
            result += s;
        }
        return result;

    }
};
int main(){
    Solution s1;
    string s = "PAYPALISHIRING";
    int noofrows = 3;
    cout << s1.ziczac(s, noofrows);
    return 0;
}