#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& h) {
        vector<int>left(h.size());
        left[0] = h[0];
        vector<int>right(h.size());
        right[h.size()-1] =h[h.size()-1];
        for(int i =1;i<h.size();i++){
             left[i] =max(left[i-1],h[i]);
        }
        for(int i =h.size()-2;i>=0;i--){
            right[i] = max(right[i+1],h[i]);
        }
        int water =0;
        for(int i =1;i<h.size()-1;i++){
            int res = min(left[i-1],right[i+1]);
            if(res>h[i]){
                water+=res-h[i];
            }
        }
        return water;
    }
};