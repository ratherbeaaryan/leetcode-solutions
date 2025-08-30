// Last updated: 8/30/2025, 11:52:16 AM
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> rowset(9);
        vector<set<char>> colset(9);
        map<pair<int, int>,set<char>> box;
        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                if (board[r][c] == '.') {
                    continue;
                }
                if ((rowset[r].count(board[r][c])) ||
                    (colset[c].count(board[r][c])) || (box[{r / 3, c / 3}].count(
                                                       board[r][c]))) {
                                                    return false;
                                                        
                }
                rowset[r].insert(board[r][c]);
                colset[c].insert(board[r][c]);
                box[{r/3,c/3}].insert(board[r][c]);
            }
        }
        return true;
    }
};