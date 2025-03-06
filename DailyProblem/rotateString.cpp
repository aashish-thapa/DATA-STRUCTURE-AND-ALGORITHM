#include <iostream>
#include <cstring>
using namespace std;
class Solution{
    public:
    bool rotateString(string s, string goal){
        if(s.size() != goal.size()) return false;
        string doubles = s + s;
        return (strstr(doubles.data(), goal.data()) != nullptr);
    }
};