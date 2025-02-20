#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution{
    public:
    int characterReplacement(string&s, int k){
        vector<int> charCount(26,0);
        int left = 0;
        int right = 0;
        int maxcnt = 0;
        for(right = 0 ; right < s.size(); right++){
            maxcnt = max(maxcnt, charCount[s[right] - 'A']++);
            if(right - left + 1 - maxcnt > k){
                charCount[s[left]]--;
                left ++;
            }
        }
        return right - left;
    }

};