#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
    vector<int> decrypt(vector<int>& code, int k){
        
        int n = code.size();
        vector<int> res;
        if(k == 0) return res;
        for(int i = 0; i < n; i++){
            if(k > 0){
            for(int j = i + 1; j < i + 1 + k ; j++){
                res[i] = code[j % n];
            }
        }
        else{
            for(int j = i + k ; j < i; j++){
                res[i] = code[(j+n)%n];
            }
        }
        }
        return res;
    }
};