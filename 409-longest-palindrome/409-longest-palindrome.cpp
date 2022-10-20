class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> map;
        int pair = 0;
        int single = 0;
        for(auto ch : s)
        {
            map[ch]++;
        }
        
        for(auto x : map)
        {
            pair += (x.second/2);
            
            if(x.second % 2 != 0)
                single = 1;
        }
        
        return (pair*2)+single;
        
    }
};