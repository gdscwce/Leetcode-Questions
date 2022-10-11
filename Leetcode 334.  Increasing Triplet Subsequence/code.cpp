 bool increasingTriplet(vector<int>& nums) {
        
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            
            int idx=lower_bound(ans.begin(),ans.end(),nums[i])-ans.begin();
            if(idx==ans.size())
                ans.push_back(nums[i]);
            ans[idx]=nums[i];
            if(ans.size()>=3)
                return true;
        }
        
        return false;
        
    }
