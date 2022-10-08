#include<bits/stdc++.h>
using namespace std;
bool isPossible(int arr[],int n,int m,int curr_min)
{
    int studentUsed = 1;
    int pagesReading = 0;

    for(int i = 0;i<n;i++)
    {
        //not required
        if(pagesReading+arr[i] > curr_min)
        {
            studentUsed++;
            pagesReading = arr[i];
            if(studentUsed>m)
            {
                return false;
            }
        }else{
            pagesReading += arr[i];
        }
    }
    return true;
}

int findPages(int arr[],int n,int m)
{
    int sum = 0;
    if(n<m)
    {
        return -1;
    }
    //count the no of pages
    for(int i = 0;i<n;i++)
    {
        sum += arr[i];
    }

    int s = arr[n-1];
    int e = sum;
    int ans = INT_MAX;

    while(s<=e)
    {
        int mid = (s+e)/2;

        if(isPossible(arr,n,m,mid))
        {
            ans = min(ans,mid);
            e = mid - 1;

        }else{
            //it is possible to devide the pages
            s = mid+1;
        }

    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Minimum number of maximum pages :"<<findPages(arr,n,m)<<endl;
    }
    return 0;

}


