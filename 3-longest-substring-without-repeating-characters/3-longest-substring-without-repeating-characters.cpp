class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int n = s.size(); 

        for (int i = 0; i < n; i++) 
        {
            vector<bool> visited(256);  

            for (int j = i; j < n; j++) 
            {
                if (visited[s[j]] == true)
                    break;
                else 
                {
                    ans = max(ans, j - i + 1);
                    visited[s[j]] = true;
                }
            }
        }
        return ans;
    }
};