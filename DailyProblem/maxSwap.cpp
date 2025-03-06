#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <algorithm>
using namespace std;
class Solution{
    public:
    int swapNum(int num){
        unordered_map<char, int> hmap;
        string numStr = to_string(num);
        for(int i = 0 ; i < numStr.size(); i++){
            hmap[numStr[i]] = i;
        }
        for(int i = 0 ; i < numStr.size(); i++){
            for(char digits = '9' ; digits > numStr[i] ; digits--){
                if(hmap.find(digits) != hmap.end() && hmap[digits] > i){
                    swap(numStr(i), numStr[hmap[digits]]);
                    return stoi(numStr);
                }
            }
        }

        return num;
    }
}