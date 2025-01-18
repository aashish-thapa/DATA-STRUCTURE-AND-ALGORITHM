class Solution{
    public:
    int maxArea(vector<int>& height){
        int left = 0;
        int right = height.size();
        int res  =0;
        while(left < right){
            int water = min(height[left], height[right]) * (right - left);
            res = max(res, water);
            if(height[right] > height[left]){
                left++;
            }
            else{
                right--;
            }
        }
        return res;
    }
}