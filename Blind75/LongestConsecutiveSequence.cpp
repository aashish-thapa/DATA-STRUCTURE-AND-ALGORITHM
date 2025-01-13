#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;


class Solution{
    public:
    int longestConsecutive(vector<int>& nums){
        unordered_set<int> hset;
        int longest = 0;
        for(int num : nums){
            hset.insert(num);
        }
        for(int num : nums){
            if(hset.find(num) != hset.end() && hset.find(num -1) == hset.end()){
                int length = 0;
                int curr = num;
                while(hset.find(curr) != hset.end()){
                    hset.erase(curr);
                    length++;
                    curr++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
 

int main(){
    return 0;
}