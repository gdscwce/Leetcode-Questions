class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans(2);
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i]) != mp.end() && mp[target-nums[i]] != i)
            {
                ans = {mp[target-nums[i]],i};
                return ans;
            }
            else
            {
                mp[nums[i]] = i;
            }
        }
        return ans;
    }
};