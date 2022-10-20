/*
Name - Poor Pigs
Dificulty - Hard
Problem number - 458
Link - https://leetcode.com/problems/poor-pigs/
*/

class Solution
{
public:
    int poorPigs(int b, int md, int mt)
    {
        return ceil(log(b) / log(mt / md + 1));
    }
};