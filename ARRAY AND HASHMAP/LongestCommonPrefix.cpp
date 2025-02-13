//Longest Common Prefix
/*
strs={"flower","flow","flight"}
output= "fl"*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class Solution{
    public:
    std::string LongestCommonPrefix(std::vector<std::string>& strs){
        sort(strs.begin(), strs.end());
        std::string first = strs.front();
        std::string back = strs.back();
        int minLength = std::min(first.size(), back.size());
        int i = 0;
        while(i < minLength && first[i] == back[i]){
            i++;
        }
        return strs.substr(0,i);
    }
};

int main(){
    vector<string> strs = {"flower", "flaw", "football"};
    
}