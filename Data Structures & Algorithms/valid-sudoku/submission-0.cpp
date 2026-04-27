class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> row;
        unordered_map<int, unordered_set<char>> cols;

        map<pair<int, int>, unordered_set<char>> sqr;

        for (int r = 0; r < 9; r++){
            for (int c = 0; c < 9; c++) {
                if (board[r][c] == '.') {
                    continue;
                }
                pair<int, int> sqr_key = {r / 3, c / 3};

                if (row[r].count(board[r][c]) ||
                cols[c].count(board[r][c]) || 
                sqr[sqr_key].count(board[r][c])) {
                    return false;
                }
                row[r].insert(board[r][c]);
                cols[c].insert(board[r][c]);
                sqr[sqr_key].insert(board[r][c]);
            }
        }
        return true;        
    }
};
