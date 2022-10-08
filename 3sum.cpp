class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size(), zerocount = 0;
        vector<vector<int>> ans;
        set<int> twice;
        unordered_map<int, int> found;
        
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) zerocount++;
            else if (found.count(nums[i]) > 0) twice.insert(nums[i]);
            found[nums[i]] = i;
        }
        
        if (zerocount >= 3) ans.push_back({0, 0, 0});
        for (int i : twice) {
            if (found.count(-2 * i) > 0) ans.push_back({i, i, -2 * i});
        }
        
        for (int i = 0; i < n; i++) {
            if (found[nums[i]] != i) continue;
            for (int j = i + 1; j < n; j++) {
                if (found[nums[j]] != j) continue;
                int complement = -(nums[i] + nums[j]);
                if (found.count(complement) > 0) {
                    if (found[complement] > j) ans.push_back({nums[i], nums[j], complement});
                }
            }
        }
        return ans;
    }
};
