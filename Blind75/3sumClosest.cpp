#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution{
    public:
        int threesumClosest(vector<int>& nums, int target){
            sort(nums.begin(), nums.end());
            int closest = nums[0] + nums[1] + nums[2];
            for(int i = 0; i < nums.size() - 2; i++){
                int j = i + 1;
                int k = nums.size() - 1;
                while(j < k){
                    int sum  = nums[i] + nums[j] + nums[k];
                    if(abs(sum - target) < abs(closest - target)){
                        closest = sum;
                    }
                    if(sum > target){
                        k--;
                    }
                    else if(sum <  target){
                        j++;
                    }
                    else{
                        return sum;
                    }
                }
            }
            return closest;
        }
};
int main(){
    // test cases
}