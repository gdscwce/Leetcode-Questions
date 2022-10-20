//Name - Nitish Kumar Maurya
//Difficulty - Hard
//Problem number - 84
//Problem Link - https://leetcode.com/problems/largest-rectangle-in-histogram/
int largestRectangleArea(int* heights, int heightsSize){
    int i,j,m=0,c,k=0;
    for(i=0;i<heightsSize-1;i++)
    {
        if(heights[i]!=heights[i+1])
        {
           k=1;
            break;
        }
    }
    if(k==0)
    {
        return heightsSize*heights[0];
    }
    for(i=0;i<heightsSize;i++)
    {
        c=1;
        for(j=i+1;j<heightsSize;j++)
        {
            if(heights[i]<=heights[j])
            {
                c++;
            }
            else
            {
                break;
            }
        }
        for(j=i-1;j>=0;j--)
        {
            if(heights[i]<=heights[j])
            {
                c++;
            }
            else
            {
                break;
            }
        }
        m=m>(heights[i]*c)?m:(heights[i]*c);
    }
    return m;
}