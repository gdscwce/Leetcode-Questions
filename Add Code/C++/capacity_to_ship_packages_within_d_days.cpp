// Name -  Capacity To Ship Packages Within D Days
// Dificulty - Medium
// Problem number - 1011
// Link - https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/



#include<bits/stdc++.h>

class Solution {
public:
    bool isPossible(vector<int>& weights, int days,int mid,int size){
    int totalDays=1;
    int mass=0;
        
        for(int i=0;i<size;i++){
            if(mass+weights[i]>mid){
                totalDays++;
                mass=weights[i];
                
                if(totalDays>days || weights[i]>mid){
                    return false;
                }
            }
            else{
                mass+=weights[i];
            }
        }
        return true;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int allSum=0;
        int size=weights.size();
        int ans=INT_MAX;
        
        for(int i=0;i<size;i++){
            allSum+=weights[i];
        }
        
        
        int s=0;
        int e=allSum;
        while(s<=e){
            int mid=(s+e)/2;
            if(isPossible(weights,days,mid,size)){
               ans=min(ans,mid);
               e=mid-1; 
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};