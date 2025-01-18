class Solution{
    public:
    int maxProduct(vector<int>& nums){
        int lefttoright = 1;
        int  righttoleft = 1;
        int res = 0;

        if(nums.size()<=1){
            return nums[0];
        }
        for(int i = 0; i < nums.size(); i++){

            lefttoright *= nums[i];
            int j = nums.size() - 1 - i;
            righttoleft *= nums[j];
            res = max({lefttoright, righttoleft, res});
            
        }
        return res;
    }
}