#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution{
    public:
    string multiply(string num1, string  num2){
        if(num1 == "0" || num2 == "0"){
            return 0;
        }
        int m = num1.size(), n = num2.size();
        vector<int> result(m+n, 0);

        for(int i = m -1; i >= 0; i--){
            for(int j = n - 1;j >= 0; j--){
                int multiply = (num1[i] - '0') * (num2[j] - '0');
                int sum = multiply + result[i + j + 1];
                result[i+j+1] = sum % 10;
                result[i+j] = sum /10;
            }
        }

        string product = "";
        for(int num : product){
            if(!(product.empty() && num == 0)){
                product += (num + '0');
            }
        }
        return product.empty() ? 0 : product;

    }
}