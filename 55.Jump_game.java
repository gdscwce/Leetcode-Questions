class Solution {
    public boolean canJump(int[] nums) {
        if(nums.length==0)
            return true;
        if(nums[0]==0 && nums.length==1)
            return true;
         if(nums[0]==0 && nums.length!=1)
            return false;
        boolean res=false;
        int n=nums.length;
        int maxreach=nums[0];
        for(int i=0;i<n;i++){
            if(maxreach<i)
            {
                return false;
            }
           if(maxreach>=n-1)
            {res=true;break;}
            maxreach=Math.max(maxreach,i+nums[i]);
        }
            
        return res;
        
    }
}
