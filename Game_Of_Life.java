class Solution {
    public static void main(String[] args) {
        Solution sol = new Solution();
        // int board[][] = { { 0, 1, 0 }, { 0, 0, 1 }, { 1, 1, 1 }, { 0, 0, 0 } };
        int board[][] = { { 1, 1 }, { 1, 1 } };
        sol.gameOfLife(board);
    }

    public void gameOfLife(int[][] board) {
        int m = board.length;
        int n = board[0].length;
        int mtx[][] = new int[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                mtx[i][j] = board[i][j];
            }
        }

        for (int i = 0; i < m; i++) {

            for (int j = 0; j < n; j++) {
                int count_0 = 0;
                int count_1 = 0;
                int x = i - 1;
                int y = j - 1;
                if (x >= 0 && y < n && x < m && y >= 0) {
                    int val = board[x][y];
                    if (val == 0)
                        count_0++;
                    else
                        count_1++;
                }

                x = i - 1;
                y = j;
                if (x >= 0 && y < n && x < m && y >= 0) {
                    int val = board[x][y];
                    if (val == 0)
                        count_0++;
                    else
                        count_1++;
                }

                x = i - 1;
                y = j + 1;
                if (x >= 0 && y < n && x < m && y >= 0) {
                    int val = board[x][y];
                    if (val == 0)
                        count_0++;
                    else
                        count_1++;
                }

                x = i;
                y = j - 1;
                if (x >= 0 && y < n && x < m && y >= 0) {
                    int val = board[x][y];
                    if (val == 0)
                        count_0++;
                    else
                        count_1++;
                }

                x = i;
                y = j;
                if (x >= 0 && y < n && x < m && y >= 0) {
                    int val = board[x][y];
                    if (val == 0)
                        count_0++;
                    else
                        count_1++;
                }

                x = i;
                y = j + 1;
                if (x >= 0 && y < n && x < m && y >= 0) {
                    int val = board[x][y];
                    if (val == 0)
                        count_0++;
                    else
                        count_1++;
                }

                x = i + 1;
                y = j - 1;
                if (x >= 0 && y < n && x < m && y >= 0) {
                    int val = board[x][y];
                    if (val == 0)
                        count_0++;
                    else
                        count_1++;
                }

                x = i + 1;
                y = j;
                if (x >= 0 && y < n && x < m && y >= 0) {
                    int val = board[x][y];
                    if (val == 0)
                        count_0++;
                    else
                        count_1++;
                }

                x = i + 1;
                y = j + 1;
                if (x >= 0 && y < n && x < m && y >= 0) {
                    int val = board[x][y];
                    if (val == 0)
                        count_0++;
                    else
                        count_1++;
                }
        
                if (board[i][j] == 0) {
                    count_0--;
                    if (count_1 == 3) {
                        mtx[i][j] = 1;
                    }

                } else {
                    count_1--;
                    if (count_1 < 2) {
                        mtx[i][j] = 0;
                    }
                    if (count_1 == 2) {
                        mtx[i][j] = 1;
                    }
                    if (count_1 == 3) {
                        mtx[i][j] = 1;
                    }
                    if (count_1 > 3) {
                        mtx[i][j] = 0;
                    }
                }

            }

        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                board[i][j] = mtx[i][j];
            }
        }

    }
}