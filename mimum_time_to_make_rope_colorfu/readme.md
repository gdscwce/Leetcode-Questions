Alice has n balloons arranged on a rope. You are given a 0-indexed string colors where colors[i] is the color of the ith balloon.

Alice wants the rope to be colorful. She does not want two consecutive balloons to be of the same color, so she asks Bob for help. Bob can remove some balloons from the rope to make it colorful. You are given a 0-indexed integer array neededTime where neededTime[i] is the time (in seconds) that Bob needs to remove the ith balloon from the rope.

Return the minimum time Bob needs to make the rope colorful.



Example 1:

![image](https://user-images.githubusercontent.com/91198794/193591458-85a36959-6764-401c-8253-86781b5ee652.png)




Input: colors = "abaac", neededTime = [1,2,3,4,5]
Output: 3

Explanation: In the above image, 'a' is blue, 'b' is red, and 'c' is green.
Bob can remove the blue balloon at index 2. This takes 3 seconds.
There are no longer two consecutive balloons of the same color. Total time = 3.





Example 2:



![image](https://user-images.githubusercontent.com/91198794/193590996-8661f28b-e24f-4f91-8111-82b8ba888950.png)



Input: colors = "abc", neededTime = [1,2,3]

Output: 0

Explanation: The rope is already colorful. Bob does not need to remove any balloons from the rope.




Example 3:




![image](https://user-images.githubusercontent.com/91198794/193591128-1a697b7d-64aa-4d24-92f6-1cb4dee40218.png)


Input: colors = "aabaa", neededTime = [1,2,3,4,1]

Output: 2

Explanation: Bob will remove the ballons at indices 0 and 4. Each ballon takes 1 second to remove.
There are no longer two consecutive balloons of the same color. Total time = 1 + 1 = 2.
 

Constraints:

n == colors.length == neededTime.length

1 <= n <= 105

1 <= neededTime[i] <= 104

colors contains only lowercase English letters.
