class Solution {
    public int majorityElement(int[] nums) {
        int count=0;
        Integer now=null;
        for(int num:nums){
            if(count==0){
                now = num;
            }
            count += (num==now)?1:-1;
        }
        return now;
    }
}