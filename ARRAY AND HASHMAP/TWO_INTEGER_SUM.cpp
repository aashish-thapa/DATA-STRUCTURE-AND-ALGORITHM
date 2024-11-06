/*
Two Integer Sum

Given an array of integers nums and an integer target, return the indices i and j such that nums[i] + nums[j] == target and i != j.

You may assume that every input has exactly one pair of indices i and j that satisfy the condition.

Return the answer with the smaller index first.

Example 1:

Input: 
nums = [3,4,5,6], target = 7

Output: [0,1]

Explanation: nums[0] + nums[1] == 7, so we return [0, 1].

Example 2:

Input: nums = [4,5,6], target = 10

Output: [0,2]

Example 3:
*/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution{
  public:
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int, int> numToIndex;
        
        for(int i = 0; i<nums.size(); i++){
            int complement = target - nums[i];
            
            
            if (numToIndex.find(complement) != numToIndex.end()){
                return {numToIndex[complement], i};
                
            }
            numToIndex[nums[i]] = i;
                
        }
        return {};
    }
};

int main(){
    vector<int> nums = {4 , 5, 6};
    int target = 10;
    Solution s1;
    vector<int> results = s1.twoSum(nums, target);
    cout<<"{ "<<results[0]<< ", " << results[1]<<"}";
}