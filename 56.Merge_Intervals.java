class Solution {
    public int[][] merge(int[][] intervals) {
        if (intervals == null || intervals.length == 0) 
            return intervals;
       Arrays.sort(intervals, (a, b) -> (a[0] - b[0]));
        int end = 0;
        for (int i = 1; i < intervals.length; i ++) {
            if (intervals[end][1] >= intervals[i][0]) {
                intervals[end][1] = intervals[i][1] > intervals[end][1] ? intervals[i][1] : intervals[end][1];
            } else {
                intervals[++end] = intervals[i];
            }
        }
        int[][] ans = new int[end + 1][];
        for (int i = 0; i <= end; i ++) {
            ans[i] = intervals[i];
        }
        return ans;
    }
}
