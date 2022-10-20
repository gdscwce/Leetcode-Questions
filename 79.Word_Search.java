class Solution {
    public boolean exist(char[][] board, String word) {
        for(int i = 0; i < board.length; i++){
            for(int j = 0; j < board[0].length; j++){
                if(find(board, word, 0, i, j)) return true;
            }
        }
        return false;
    }
    
    public boolean find(char[][] board, String word, int index, int i, int j){
        
        // If we reached the end of the word
        if(index == word.length()) return true;
        
        // If the indices are out of bounds
        if(i < 0 || j < 0 || i >= board.length || j >= board[0].length) return false;
        
        // If the starting letter does not match
        if(board[i][j] != word.charAt(index)) return false;
        
        // Swap the current letter with a dummy variable to prevent repeats
        char temp = board[i][j];
        board[i][j] = '-';
        
        // Get the result from finding left, right, up, or down
        boolean res = find(board, word, index + 1, i + 1, j) || find(board, word, index + 1, i - 1, j) || 
            find(board, word, index + 1, i, j + 1) || find(board, word, index + 1, i, j - 1);
        
        // Swap back
        board[i][j] = temp;
        return res;
    }
