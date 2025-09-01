class SudokuValidator:
    def __init__(self, board):
        self.board = board

    def is_valid(self):
        row = [set() for _ in range(9)]
        column = [set() for _ in range(9)]
        box = [set() for _ in range(9)]

        for i in range(9):
            for j in range(9):
                num = self.board[i][j]
                if num == '.':
                    continue
                boxIndex = (i // 3) * 3 + (j // 3)
                if num in row[i] or num in column[j] or num in box[boxIndex]:
                    return False
                row[i].add(num)
                column[j].add(num)
                box[boxIndex].add(num)

        return True


def main():
    # Example valid board
    board = [["5","3",".",".","7",".",".",".","."]
            ,["6",".",".","1","9","5",".",".","."]
            ,[".","9","8",".",".",".",".","6","."]
            ,["8",".",".",".","6",".",".",".","3"]
            ,["4",".",".","8",".","3",".",".","1"]
            ,["7",".",".",".","2",".",".",".","6"]
            ,[".","6",".",".",".",".","2","8","."]
            ,[".",".",".","4","1","9",".",".","5"]
            ,[".",".",".",".","8",".",".","7","9"]]

    validator = SudokuValidator(board)
    print("Is board valid?", validator.is_valid())

    # Example invalid board (duplicate "5" in first row)
    bad_board = [["5","3",".",".","7",".",".",".","5"]
                ,["6",".",".","1","9","5",".",".","."]
                ,[".","9","8",".",".",".",".","6","."]
                ,["8",".",".",".","6",".",".",".","3"]
                ,["4",".",".","8",".","3",".",".","1"]
                ,["7",".",".",".","2",".",".",".","6"]
                ,[".","6",".",".",".",".","2","8","."]
                ,[".",".",".","4","1","9",".",".","5"]
                ,[".",".",".",".","8",".",".","7","9"]]

    bad_validator = SudokuValidator(bad_board)
    print("Is bad board valid?", bad_validator.is_valid())


if __name__ == "__main__":
    main()

