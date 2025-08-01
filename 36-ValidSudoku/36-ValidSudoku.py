# Last updated: 8/1/2025, 11:40:47 PM
from collections import defaultdict
class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        cols = defaultdict(set)
        row = defaultdict(set)
        box = defaultdict(set)
        for r in range(9):
            for c in range(9):
                val = board[r][c]

                if val == '.':
                    continue

            
                if (val in row[r] or 
                    val in cols[c] or 
                    val in box[(r // 3, c // 3)]):
                    return False

            
            
                cols[c].add(board[r][c])
                row[r].add(board[r][c])
                box[r//3,c//3].add(board[r][c])

        return True
            
        

    