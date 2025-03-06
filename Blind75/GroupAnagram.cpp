#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution{
    public:
    vector<vector<string>> groupAnagram(vector<string>& strs){
        vector<vector<string>>res;
        unordered_map<string, vector<string>> hmap;
        for(const string s : strs){
            string str = s;
            sort(s.begin(), s.end());
            hmap[str].push_back(s);
        }
        for(auto pair: hmap){
            res.push_back(pair.second);
        }
        return res;
    }
};
int main(){
    Solution s1;
}