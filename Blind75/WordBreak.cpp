// 139. Word Break
// Medium
// Topics
// Companies

// Given a string s and a dictionary of strings wordDict, return true if s can be segmented into a space-separated sequence of one or more dictionary words.

// Note that the same word in the dictionary may be reused multiple times in the segmentation.

 

// Example 1:

// Input: s = "leetcode", wordDict = ["leet","code"]
// Output: true
// Explanation: Return true because "leetcode" can be segmented as "leet code".

// Example 2:

// Input: s = "applepenapple", wordDict = ["apple","pen"]
// Output: true
// Explanation: Return true because "applepenapple" can be segmented as "apple pen apple".
// Note that you are allowed to reuse a dictionary word.

// Example 3:

// Input: s = "catsandog", wordDict = ["cats","dog","sand","and","cat"]
// Output: false
//using the recursive approach
#include <iostream>
#include <algorith>
#include <string>
#include <vector>
using namespace std;
class Solution{
    public:
        bool WordBreak(string &s, vector<string>& wordDict){
            int n = s.size();
            if(n == 0){
                return true;
            }
            for(int i = 1; i <= n ; i++){
                string subs = s.substr(0, i);
                if(find(wordDict.begin(), wordDict.end(), subs) && WordBreak(s.substr(i), wordDict)){
                    return true;
                }
            }
            return false;
        }
};