class Solution {
public:
    string longestPalindrome(string s) {
        
        if (s.size() < 2)
            return s;

        int len = s.size();
        int maxl = 0, maxlen = 1;
        int left, right;
        for (int start = 0; start < len && len - start > maxlen / 2;) 
        {
            left = right = start;
            while (right < len - 1 && s[right + 1] == s[right])
                right++;
            start = right + 1;
            while (right < len - 1 && left > 0 && s[right + 1] == s[left - 1]) 
            {
                right++;
                left--;
            }
            
            if (maxlen < right - left + 1) 
            {
                maxl = left;
                maxlen = right - left + 1;
            }
        }
        
         return s.substr(maxl, maxlen);
    }
};