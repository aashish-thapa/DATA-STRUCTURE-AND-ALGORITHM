#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
    void generate(vector<string>& result, string current, int open, int close, int n){
        if(current.size() == 2 * n){
            result.push_back(current);
            return;

        }
        if(open < n){
            generate(result, current + "(", open + 1, close, n);
        }
        if(close < open){
            generate(result, current + ")", open, close + 1, n);
        }
    }
    vector<string> generateParenthesis(int n){
        vector<string> result;
        generate(result, "", 0, 0, n);
        return result;

    }
};
int main(){
    Solution s1;
    int n = 3;
    vector<string> result = s1.generateParenthesis(n);
    for(string c : result){
        cout << c << " ";
    }
}