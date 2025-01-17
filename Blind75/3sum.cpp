class Solution{
    public:
    vector<vector<int>> threeSum(vector<int>& nums){
        vector<vector<int>> rs;
        sort(num.begin(), num.end());
        int i, j, k;
        int n = nums.size();
        for(int i = 0; i < n - 2; i++ ){
            if(i > 0 && nums[i] == nums[i + 1]) continue;
            j = i + 1;
            k = n - 1;
            while(j < n){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    rs.pushback({nums[i] , nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if(sum < 0){
                    j++;
                }
                else if(sum > 0){
                    k--;
                }
            }
        }
        vector<vector<int>>result(rs.begin(), rs.end());
        return result;
    }

};