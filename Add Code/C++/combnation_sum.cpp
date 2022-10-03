//Name : Combination sum
//Difficulty : Medium
//Problem Number : 39
//Link : https://leetcode.com/problems/combination-sum/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void fun(vector<vector<int>> &ans, vector<int> &can, int t, vector<int> &tmp, int x){
        if(x==-1){
            if(t==0) ans.push_back(tmp);
            return;
        }
        if(t<0) return;
        fun(ans, can, t, tmp, x-1);
        tmp.push_back(can[x]);
        fun(ans, can, t-can[x], tmp, x);
        tmp.pop_back();
    } 
    
    vector<vector<int>> combinationSum(vector<int>& can, int t) {
        vector<vector<int>> ans;
        vector<int> tmp;
        fun(ans, can, t, tmp, can.size()-1);
        return ans;
    }
};
