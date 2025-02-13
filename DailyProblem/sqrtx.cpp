class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;

        long long r = x;
        while (r * r > x) {
            r = (r + x / r) / 2;
        }
        return r;
    }
};