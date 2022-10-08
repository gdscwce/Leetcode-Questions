// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int row = grid.size();
        int col = grid[0].size();
        int total = 0, cnt = 0;
        int time = 0;
        queue<pair<int, int>> q;
        pair<int, int> p;
        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                if(grid[i][j] != 0) total++;
                if(grid[i][j] == 2) {
                    p.first = i;
                    p.second = j;
                    q.push({i, j});
                    cnt++;
                }
            }
        }
        int x, y;
        pair<int, int> pa;
        // pair<int, int> ans = p;
        int n;
        // int n = q.size();
        while(!q.empty()) {
            n = q.size();
            while(n--) {
                p = q.front();
                q.pop();
                y = p.first;
                x = p.second;
                if(y-1>=0) {
                    if(grid[y-1][x] == 1) {
                        pa.first = y-1;
                        pa.second = x;
                        q.push({y-1, x});
                        grid[y-1][x] = 2;
                        cnt++;
                        // cout << pa.first << " " << pa.second;
                        // return 10;
                    }
                }
                if(y+1<row) {
                    if(grid[y+1][x] == 1) {
                        pa.first = y+1;
                        pa.second = x;
                        q.push({y+1, x});
                        grid[y+1][x] = 2;
                        cnt++;
                        // cout << pa.first << " " << pa.second;
                        // return 10;
                    }
                }
                if(x-1>=0) {
                    // cout << "Enter\n";
                    if(grid[y][x-1] == 1) {
                        pa.first = y;
                        pa.second = x-1;
                        q.push({y, x-1});
                        grid[y][x-1] = 2;
                        cnt++;
                        // cout << pa.first << " " << pa.second;
                        // return grid[y][];
                    }
                }
                if(x+1<col) {
                    if(grid[y][x+1] == 1) {
                        pa.first = y;
                        pa.second = x+1;
                        q.push({y, x+1});
                        grid[y][x+1] = 2;
                        cnt++;
                        // cout << pa.first << " " << pa.second;
                        // return 10;
                    }
                }
            }
            if(!q.empty()) {
                time++;
            }
            else break;
        }
        if(total == cnt) return time;
        else 
            return -1;
        
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends