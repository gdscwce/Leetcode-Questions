class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for (auto x:nums2) nums1.push_back(x);
        sort(nums1.begin(),nums1.end());
        if(nums1.size()%2==1) return nums1[(nums1.size()-1)/2];
        else return float(nums1[nums1.size()/2-1]+nums1[nums1.size()/2])/2;
    }
};