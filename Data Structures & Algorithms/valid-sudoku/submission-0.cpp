class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // checking rows using hashset
        std::unordered_set<char> seenRows;

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {

                if (board[i][j] == '.') continue;

                if (seenRows.find(board[i][j]) != seenRows.end()) {
                    return false;
                } else {
                    seenRows.insert(board[i][j]);
                }
            }
            seenRows.clear();
        }

        // checking cols using hashset
        std::unordered_set<char> seenCols;

        for (int j = 0; j < board.size(); j++) {
            for (int i = 0; i < board[j].size(); i++) {

                if (board[i][j] == '.') continue;

                if (seenCols.find(board[i][j]) != seenCols.end()) {
                    return false;
                } else {
                    seenCols.insert(board[i][j]);
                }
            }
            seenCols.clear();
        }

        // checking squares
        for (int row = 0; row < 9; row += 3) {
            for (int col = 0; col < 9; col += 3) {

                std::unordered_set<char> seenSq;

                for (int i = row; i < row + 3; i++) {
                    for (int j = col; j < col + 3; j++) {

                        if (board[i][j] == '.') continue;

                        if (seenSq.find(board[i][j]) != seenSq.end()) {
                            return false;
                        } else {
                            seenSq.insert(board[i][j]);
                        }
                    }
                }
            }
        }

        return true;
    }
};
