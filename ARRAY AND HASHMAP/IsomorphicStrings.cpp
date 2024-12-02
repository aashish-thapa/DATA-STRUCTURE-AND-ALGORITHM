class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char,char> smap;
        unordered_map<char, char> tmap;
        for(int i = 0; i < s.length(); i++){
            char sc = s[i];
            char tc = t[i];
            if(smap.count(sc) && smap[sc] != tc){
                return false;
            }
            if(tmap.count(tc) && tmap[tc] != sc){
                return false;
            }

            smap[sc] = tc;
            tmap[tc] = sc;
        }
        return true;
    }
};