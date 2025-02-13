class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> hmap;
        for(int num : nums){
            hmap[num]++;
        }
        for(auto pair : hmap){
            if(pair.second == 1){
                return pair.first;
            }
        }
        return 0;
    }
};