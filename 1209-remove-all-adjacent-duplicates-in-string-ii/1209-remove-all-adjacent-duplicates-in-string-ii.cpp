class Solution {
public:
    string removeDuplicates(string s, int k) {
        int i, j;
        stack<int> stk;
        stk.push(0);
        for (i = 1, j = 1; j < s.size(); i++, j++) 
        {
            s[i] = s[j];
            if (i == 0 || s[i] != s[i-1]) 
                stk.push(i);
            else if (i - stk.top() + 1 == k) 
            {
                i = stk.top() - 1;
                stk.pop();
            }
        }
        return s.substr(0, i);
    }
};
