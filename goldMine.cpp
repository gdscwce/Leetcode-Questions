// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    long long int maxGold(int n, int m, vector<vector<int>> M) {

      // int len = M[0].size();
        // if(len == m) cout << "YES\n";
        int ans = INT_MIN;
        for(int j=1; j<m; j++) {
            for(int i=0; i<n; i++) {
                if(i==0 && i<n) M[i][j] = M[i][j] + max(M[i][j-1], M[i+1][j-1]);
                if(i==n-1 && i>0) M[i][j] = M[i][j] + max(M[i][j-1], M[i-1][j-1]);
                else M[i][j] = M[i][j] + max(M[i][j-1], max(M[i-1][j-1], M[i+1][j-1]));
            }
        }
        for(int i=0; i<n; i++) {
            ans = max(ans, M[i][m-1]);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}  // } Driver Code Ends