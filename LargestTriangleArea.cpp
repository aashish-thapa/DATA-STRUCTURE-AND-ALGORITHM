#include<iostream>
#include<algorithm>
class Solution {
public:
    double calculateArea(vector<int> p1, vector<int> p2, vector<int> p3) {
        return fabs(0.5 *
        ((p2[0] - p1[0]) * (p3[1] - p1[1]) -
         (p3[0] - p1[0]) * (p2[1] - p1[1]))
        );
    }
    double largestTriangleArea(vector<vector<int>>& points) {
        double maxArea = 0;
        int n = points.size();
        for(int i = 0 ;i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    maxArea = std::max(maxArea, calculateArea(points[i], points[j], points[k]));
                }
            }
        }

        return maxArea;

    }
};
