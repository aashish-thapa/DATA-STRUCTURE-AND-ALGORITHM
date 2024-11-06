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

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndex;  // Map to store number and its index
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];  // Calculate the required complement
            
            // Check if complement is already in the map
            if (numToIndex.find(complement) != numToIndex.end()) {
                return {numToIndex[complement], i};  // Return indices in order
            }
            
            // Store the current number with its index
            numToIndex[nums[i]] = i;
        }
        
        return {};  // Default return (shouldn't be reached with guaranteed solution)
    }
};
