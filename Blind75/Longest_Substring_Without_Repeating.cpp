class Solution{
    public:
    int lenghtOfLongestSubString(string s){
        unordered_set<char> hset;
        int left = 0;
        int result = 0;
        for(int i = 0; i < s.size(); i++){

            if(hset.find(s[i] != hset.end())){
                hmap.erase(s[left]);
                left++;
            }

            hmap.insert(s[i]);
            result = max(result, i - left + 1);
        }
        return result;
};