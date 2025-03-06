#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
// class Solutiom{
//     public:
//     vector<vector<int>> Permutation(vector<int>& nums){
//         vector<vector<int>> result;
//         sort(nums.begin(), nums.end());
//         do{
//             result.push_back(nums);
//         }
//         while(next_permutation(nums.begin(), nums.end()));
//         return result;
//     }

// };

class Solution{
    public:
    void backtrack(int l, int r, vector<vector<int>>& result, vector<int>& nums){
        if(l == r){
            result.push_back(nums);
        }
        unordered_set<int> seen;
        for(int i = l; i <= r; i++){
            if(seen.find(nums[i]) != seen.end()) continue;
            seen.insert(nums[i]);
            sort(nums[l], nums[i]);
            backtrack(l + 1, r , result, nums);
            sort(nums[l], nums[i]);
        }
        
    }
    vector<vector<int>> PermutationII(vector<int>& nums){
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        backtrack(0, nums.size() - 1, result, nums);
        return result;
    }
};