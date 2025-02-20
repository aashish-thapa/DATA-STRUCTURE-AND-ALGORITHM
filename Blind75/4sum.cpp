#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
    vector<vector<int>> fourSum(vector<int>& nums,int target){
        vector<vector<int>> res;
        int n = nums.size();
        for(int i = 0; i < n - 3; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            for(int j = i + 1; j < n - 2; j++){
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                int left = j + 1;
                int right = n - 1;
                while(left < right){
                    long long sum = (long long) nums[i] + nums[j] + nums[left] +nums[right];
                    if(sum == target){
                        res.push_back({nums[i] + nums[j] + nums[left] + nums[right]});
                        while(left < right && nums[left] == nums[left + 1]) left++;
                        while(left < right && nums[right] == nums[right]) right--;
                        left++;
                        right--;
                    }
                    else if(sum < target){
                        left ++;
                    }
                    else{
                        right--;
                    }
                }
            }
        }
        return res;
    }
};
int main(){
    return 0;
}