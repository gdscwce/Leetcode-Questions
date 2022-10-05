class Solution {
    List<List<Integer>> ans; 
    public List<List<Integer>> permute(int[] nums) {
        ans = new ArrayList<>();
        
        helper(nums,0);
        return ans;
    }
    
    private void helper(int nums[],int i){
        if(i==nums.length){
            //new array
            List<Integer> now = new ArrayList<>();
            for(int ox=0;ox<nums.length;ox++){
                now.add(nums[ox]);
            }
            ans.add(now);
            return;
        }
        for(int j=i;j<nums.length;j++){
            swap(nums,j,i);
            helper(nums,i+1);
            swap(nums,j,i);
        }
        
    }
    
    private void swap(int nums[],int i, int j){
        int temp = nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
}