#include <iostream>
#include <vector>
using namespace std;
class Solution{
    bool isValid(vector<vector<char>>& board, int row, int col, int num){
        for(int i = 0; i < 9; i++){
            if(board[row][i] == num){
                return false;
            }
        }
        for(int i = 0; i < 9; i++){
            if(board[i][col] == num){
                return false;
            }
        }
        int rowStart = (row/3)*3 , colStart = (col/3) * 3;
        for(int i = rowStart; i < rowStart + 3; i++){
            for(int j =colStart; j < colStart + 3; j++){
                if(board[i][j] == num){
                    return false;
                }
            }
        }
        return true;

    }
    bool solve(vector<vector<char>>& board){
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.'){
                    for(char num = '1'; num <= '9'; num++){
                        if(isValid(board, i, j, num)){
                            board[i][j] = num;
                            if(solve(board)){
                                return true;
                            }
                            board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board){
        solve(board);
    }
};
int main(){
    return 0;
}