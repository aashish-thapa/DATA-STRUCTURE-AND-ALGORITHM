#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
class Solution{
    public:
        int LongestValidParenthesis(string s ){
            stack<int> stack;
            int count = 0;
            stack.push(-1);
            for(int i = 0; i < stack.size(); i++){
                if(s[i] == '('){
                    stack.push(i);
                }
                else{
                    stack.pop();
                    if(stack.empty()){
                        stack.push(i);
                    }
                    else{
                        count = max(count, i - stack.top());
                    }
                }
            }
            return count;

        }
};
int main(){
    Solution s1;
    string s = "(()";
    cout<<s1.LongestValidParenthesis(s);
}