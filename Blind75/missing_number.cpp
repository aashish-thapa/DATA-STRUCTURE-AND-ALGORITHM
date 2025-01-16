class Solution{
    public:
    int missingNumber(vector<int>& nums){
        int size = nums.size();
        int expectedSum = size * (size + 1) / 2;
        int actSum = 0;
        for(int num : nums){
            actSum += num;
        }
        return (expectedSum - actSum);
    }
}