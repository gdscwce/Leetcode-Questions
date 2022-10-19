//42. Trapping Rain Water

//Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

//Deff - Hard

//Number - 42

//link - https://leetcode.com/problems/trapping-rain-water/

class Solution {
    public int trap(int[] height) {
        int n=height.length;
       
        int[] left=new int[n];
	    int[] right=new int[n];
	    int sum=0;
        if(n==0) return 0;
        
	    left[0]=height[0];
	    right[n-1]=height[n-1];
	    for(int i=1;i<n;i++)
	    {
	        left[i]=Math.max(left[i-1],height[i]);
	    }
	    for(int i=n-2;i>=0;i--)
	    {
	        right[i]=Math.max(right[i+1],height[i]);
	    }
        
	    for(int i=0;i<n;i++)
	    {  
	        sum=sum+(Math.min(left[i],right[i])-height[i]);
	    }
	    return sum;
        
    }
}