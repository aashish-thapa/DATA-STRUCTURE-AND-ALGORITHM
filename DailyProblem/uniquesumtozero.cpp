#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> uniqueSumTOZero(int n) {
        vector<int> res;
        for (int i = 1; i <= n / 2; ++i) { // Iterate n/2 times
            res.push_back(-i);
            res.push_back(i);
        }

        if (n % 2 != 0) { // Add 0 if n is odd
            res.push_back(0);
        }
        return res;
    }
};

int main() {
    Solution s1;
    vector<int> res_odd = s1.uniqueSumTOZero(5);
    cout << "Result for n = 5:" << endl;
    for (int i : res_odd) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> res_even = s1.uniqueSumTOZero(4);
    cout << "Result for n = 4:" << endl;
    for (int i : res_even) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
