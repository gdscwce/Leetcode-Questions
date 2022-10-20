#include<bits/stdc++.h>
using namespace std;

float sqrt_root(int n, int p)
{
    int s = 0;
    int e = n;

    float ans = -1;

    while(s<=e)
    {
        int mid = s+e/2;
        if(mid*mid == n)
        {
            return mid;
        }else if(mid*mid <n)
        {
            ans = mid;
            s = mid+1;

        }else{
            e = mid -1;
        }
    }

    // floating part
    // brute force

    float inc = .1;
    for(int times = 1;times <= p;times++)
    {
        while(ans*ans <= n)
        {
            ans = ans + inc;
        }
        // overshot the value
        ans  = ans - inc;
        inc = inc/10;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;

    cout<<"the value of the square root is : "<<sqrt_root(n,3);
}