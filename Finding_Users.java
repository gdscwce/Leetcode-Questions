import java.util.*;
class Solution {
    public static void main(String[] args) {
        Solution sol = new Solution();
        int logs[][] = {{0,5 },{1,2},{0,2},{0,5},{1,3}};
        int k = 5;
        System.out.println(sol.findingUsersActiveMinutes(logs, k));;
    }
    public int[] findingUsersActiveMinutes(int[][] logs, int k) {
        int answers[] = new int[k];
        Arrays.fill(answers,0);
        HashMap<Integer,HashSet<Integer>> hm = new HashMap<>();
        for(int i=0;i<logs.length;i++){
            int id = logs[i][0];
            int time = logs[i][1];
            if(hm.containsKey(id)){
                HashSet<Integer> hs = hm.get(id);
                hs.add(time);
                hm.put(id, hs);
            }
            else{
                HashSet<Integer> hs = new HashSet<Integer>();
                hs.add(time);
                hm.put(id, hs);
            }
        }
        for(Map.Entry<Integer,HashSet<Integer>> entry :hm.entrySet()){
            answers[entry.getValue().size()]++;
        }
        return answers;
    }
}