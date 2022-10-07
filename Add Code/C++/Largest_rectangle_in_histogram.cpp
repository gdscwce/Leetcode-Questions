/*
    Name - Largest Rectangle in Histogram
    Difficulty - Hard
    Problem Number - 84
    Link - https://leetcode.com/problems/largest-rectangle-in-histogram/
*/

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        
        // Storing first index which has smaller height than current height on left
        int left[n];
        left[0] = -1;
        stack<int> s;
        for(int i=0;i<n;i++) {
            while(s.size() and heights[s.top()] >= heights[i]) s.pop();
            if(s.size()) left[i] = s.top();
            else left[i] = -1;
            s.push(i);
        }
        
        while(s.size()) s.pop();
        int maxSize = 0;
        
        // Getting First smaller Height on right and getting max size using current index
        for(int i=n-1;i>=0;i--) {
            while(s.size() and heights[s.top()] >= heights[i]) s.pop();
            int size;
            if(s.size()) size = (s.top() - left[i] - 1) * heights[i];
            else size = (n - left[i] - 1) * heights[i];
            maxSize = max(maxSize, size);
            s.push(i);
        }
        return maxSize;
    }
};
