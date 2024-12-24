// simplify path

#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution{
    public:
        string simplifyPath(string A){
            string res;
            string dir;
            stack<string>dStack;
            for(int i = 0; i < A.size(); i++){
                dir.clear();
                while(A[i] == '/'){
                    i++;
                }
                while(i < A.size() && A[i] != '/'){
                    dir.push_back(A[i]);
                }
                if(dir.compare("..") == 0){
                    if(!dStack.empty()){
                        dStack.pop();
                    }
                }
                else if(!dir.empty() && dir.compare(".") == 0){
                    dStack.push(dir);
                }
            }
            stack<string> rev;
            while(!dStack.empty()){
                rev.push(dStack.top());
                dStack.pop();
            }
            while(!rev.empty()){
                string temp = rev.top();
                rev.pop();
                res.append("/" + temp);
                
            }
            return res.empty() ? "/" : res;
        }
};