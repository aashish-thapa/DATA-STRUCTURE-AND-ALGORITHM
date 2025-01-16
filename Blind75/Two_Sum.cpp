class Solution{
    public:
    vector<int> twoSum(vector<int>& nums, int target){
        for(int i = 0; i < nums.size(); i++){
            int rem = target - nums[i];
            if(hmap.find(rem) != hmap.end()){
                return {hmap[rem], i};
            }
            hmap[nums[i]] = i;
        }
    return {}:
    }
};
