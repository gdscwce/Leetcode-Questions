class Solution {
public:
    int maxArea(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        int maxi=INT_MIN;
        while(low<high){
            maxi=max(maxi, min(nums[low],nums[high])*(high-low));
            if(nums[low]>nums[high]) high--;
            else low++;
        }
        return maxi;
    }
};