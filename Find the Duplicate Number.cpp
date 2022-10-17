class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         int high = nums.size() - 1;
        int low = 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int v = 0;
            for (int a: nums) {
                if (a <= mid) {
                    ++ v;
                }
            }
            if (v <= mid) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};
