// Name - Plates Between Candles
// Dificulty - Medium
// Problem number - 2055
// link- https://leetcode.com/problems/plates-between-candles/
// Company name- microsoft

//code
class Solution {
public:
    vector<int> platesBetweenCandles(string S, vector<vector<int>>& Q) {
        int N = S.size(), count = 0, total = 0;
        vector<int> leftBound(N,0);
        vector<int> rightBound(N,0);
        for(int i = 0; i < N; i++) {
           if (S[i] == '|')
             count = total;
           else if (S[i] == '*')
             total++;
           rightBound[i] = count;
        }
        count = 0;
        total = 0;
        for(int i = N - 1; i >= 0; i--) {
            if (S[i] == '|')
                count = total;
            else if (S[i] == '*')
                total++;
            leftBound[i] = count;
        }
        vector<int> ans;
        for(int q = 0; q < Q.size(); q++) {
            int L = Q[q][0];
            int R = Q[q][1];
            count = leftBound[L] + rightBound[R] - total;
            if(count < 0) count = 0;
            ans.push_back(count);
        }
        return ans;
    }
};