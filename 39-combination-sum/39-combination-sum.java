class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> ans = new ArrayList<>(); // answer list
        List<Integer> temp = new ArrayList<>(); // current list
        
        ArrayList<Integer> cand = new ArrayList<>();
        for(int ele:candidates)cand.add(ele);
       
        Collections.sort(cand);
        helper(cand, ans, target,0, temp); // 0 is the starting index
        return ans;
    }
    public void helper(ArrayList<Integer> cand, List<List<Integer>>ans, int sum, int index, List<Integer> curr ){
        if(sum==0){
            ans.add(new ArrayList<>(curr));
            return;
        }
        for(int i=index;i<cand.size();i++){
            if(sum - cand.get(i) >=0){// we need more elements and we have the choice
                curr.add(cand.get(i));
                helper(cand,ans,sum-cand.get(i),i,curr); // take the element
                curr.remove(cand.get(i));
            }   
        }
        
    }
}