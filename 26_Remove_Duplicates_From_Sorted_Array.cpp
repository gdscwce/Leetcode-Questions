/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.
Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.
Return k after placing the final result in the first k slots of nums.
Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.*/ 

/*->If vector nums is empty return 0;
->Initialize variable last as 0
->Traverse from 2nd element (index 1) to end in vector nums
->f nums[i] not equal to nums[last] set nums[last+1] as nums[i] and increment last by 1
->Return last+1
*/

#include<iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.size() == 0)
    {
        return 0;
    }
    int last = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[last] != nums[i])
        {
            nums[last + 1] = nums[i];
            last++;
        }
    }
    return last + 1;
}

int main() { 
   
return 0; 
}
//https://leetcode.com/problems/remove-duplicates-from-sorted-array/