//Name - Nitish Kumar Maurya
//Difficulty - Medium
//Problem number - 46
//Problem Link - https://leetcode.com/problems/permutations/
class Solution {
    private void permutation(int ind,int []arr,List<List<Integer>>per)
    {
        if(ind==arr.length)
        {
            List<Integer>as=new ArrayList<>();
            for(int i=0;i<arr.length;i++)
            {
                as.add(arr[i]);
            }
            per.add(new ArrayList<>(as));
            return;
        }
        for(int i=ind;i<arr.length;i++)
        {
            swap(i,ind,arr);
            permutation(ind+1,arr,per);
            swap(i,ind,arr);            
        }
    }
    private void swap(int i,int j,int []arr)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>>ans=new ArrayList<>();
        permutation(0,nums,ans);
        return ans;
    }
}