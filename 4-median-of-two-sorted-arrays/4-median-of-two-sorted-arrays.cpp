class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        int m = nums1.size();
        int n = nums2.size();
        int i = 0, j = 0;
        
        while(i < m && j < n)
        {
            if(nums1[i] < nums2[j])
            {
                merged.push_back(nums1[i]);
                i++;
            }
            else
            {
                merged.push_back(nums2[j]);
                j++;
            }
        }
        
        while(i < m)
        {
            merged.push_back(nums1[i]);
            i++;
        }
        
        while(j < n)
        {
            merged.push_back(nums2[j]);
            j++;
        }
        
        int size = m+n;
        
        if(size%2 == 0)
        {
            int ans1 = merged[(m+n)/2];
            int ans2 = merged[((m+n)/2)-1];
            return ((double)ans1+(double)ans2)/2;
        }
        else
        {
            return merged[(m+n)/2];
        }
        
    }
};