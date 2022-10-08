class Solution {
public:
    int twosum(vector<int> & temp, int target, int start)
    {
        
        int b = start+1, e= temp.size()-1;
        int sum=1e9;

        while(b<e)
        {
            int curr= temp[b]+temp[e];
            if(curr == target){
                return curr;
            }
            else if(curr< target)
            {
                b++;    
            }
            else{
                e--;
            }
            
            if(abs(curr-target) < abs(sum-target))
            {
                sum = curr;
            }
        }
        return sum;
    }
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size();
        int ans=1e9;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++)
        {            
            int s = twosum(nums, target-nums[i], i);
            
            s+=nums[i];
            
            if(abs(ans-target) > abs(s-target))
                ans = s;     
        }
        return ans;
    }
};
