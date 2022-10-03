class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int i=0,j=0,n=neededTime.size();
        int ans=0;
        while(j<n){
         
         
         int mn=INT_MIN,sum=0;
         while(j<n && colors[j]==colors[i])
         sum+=neededTime[j],mn=max(mn,neededTime[j]),j++;
        
        if(j-i>1){  
            ans+=sum-mn;
        cout<<sum-mn<<endl;
        }
         i=j;



        }
        return ans;

    }
};
