#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution{
    public:
    bool validSudoku(vector<vector<char>>& board){
        vector<unordered_set<char>> row(9), col(9), box(9);
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                char num = board[i][j];
                if(num == '.'){
                    continue;
                }
                int boxindex = (i / 3)/3 + (j / 3);
                if(row[i].count(num) || col[j].count(num) || box[boxindex].count(num)){
                    return false;
                }
                row[i].insert(num);
                col[j].insert(num);
                box[boxindex].insert(num);
            }
        }
        return true;
    }
};
int main(){
    return 0;
}