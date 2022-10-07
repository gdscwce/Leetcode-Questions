/*Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.*/

/*->Initialize low as 0 and high as nums size - 1
->Calculate mid as (low+high)/2
->While low is less than or equal to high do:
->If target is  equal to nums[mid] return mid
->If target is greater than nums[mid] set low = mid + 1
->If target is less than nums[mid] set high = mid - 1
->Return low
*/

#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int low = 0, high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
                return mid;
        if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}

//https://leetcode.com/problems/search-insert-position/