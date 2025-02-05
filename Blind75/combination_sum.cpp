#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    void backtrack(int start, vector<int>& candidates, int target, vector<vector<int>>& result, vector<int>&combination){
        if(target == 0){
            result.push_back(combination);
            return;
        }
        if(target < 0){
            return;
        }
        for(int i = start; i < candidates.size(); i++){
            combination.push_back(candidates[i]);
            backtrack(i, candidates, target - candidates[i], result, combination);
            combination.pop_back();
        }
    }
    vector<vector<int>>CombinationSum(vector<int>& candidates, int target){

        vector<vector<int>> result;
        vector<int> combination;
        backtrack(0, candidates, target, result, combination);
        return result;

    }
};