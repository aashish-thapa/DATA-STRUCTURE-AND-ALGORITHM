#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
class Solution{
    public:
    vector<int> findMedian(vector<int>& nums1, vector<int>& nums2){
        vector<int> res;
        for(int num : nums1){
            res.push_back(num);
        }
        for(int num: nums2){
            res.push_back(num);
        }
        sort(res.begin(), res.end());
        if(res.size() % 2 != 0 ){
            return (double)res[(res.size()+ 1)/2];
        }
        else{
            return (double)(res[res.size()/2]+res[(res.size()/2) + 1])/2;
        }
    }
}