// We traverse the grid element by element.
// When :

// grid[i][j] == "0" -> Do nothing
// grid[i][j] == "1" ->There is an island.
// Increase the count of islands by one.
// Now we need to remove the island from the grid. [ WHY : It is done to prevent counting the rest of "1" that belong to same island ]
// We can use DFS to traverse through the island, where :
// If "1" is there, make it "0".
// Break out if we reach out of boundaries or we encounter "0" -> water.
// And to the same for neighbouring cells. [ i + 1 , i - 1 , j + 1 , j - 1 ]
class Solution
{
public:
    void turn_to_dust(vector<vector<char>> &grid, int i, int j, int m, int n)
    {
        if (i < 0 || j < 0 || i == m || j == n || grid[i][j] == '0')
            return;
        grid[i][j] = '0';
        turn_to_dust(grid, i + 1, j, m, n);
        turn_to_dust(grid, i, j + 1, m, n);
        turn_to_dust(grid, i - 1, j, m, n);
        turn_to_dust(grid, i, j - 1, m, n);
        return;
    }

    int numIslands(vector<vector<char>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        int res = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == '1')
                {
                    res++;
                    turn_to_dust(grid, i, j, m, n);
                }
            }
        }
        return res;
    }
};