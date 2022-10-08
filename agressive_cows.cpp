#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isPossible(ll arr[],ll n,ll m,ll curr_min)
{
    ll cowUsed = 1;
	ll pivot = arr[0];
	// cout<<pivot<<" ";
	for(ll i = 1;i<n-1;i++)
	{
		if(arr[i]-pivot >= curr_min)
		{
			cowUsed++;
			pivot = arr[i];
			// cout<<pivot<<" ";
		}
	}

	if(cowUsed>=m)
	{
		return true;
	}else

	return false;
   }

ll findDistance(ll arr[],ll n,ll m)
{
    ll min_val = INT_MAX;
    if(n<m)
    {
        return -1;
    }
    //count the no of pages
    for(ll i = 0;i<n-1;i++)
    {
        min_val = min(min_val,arr[i+1]-arr[i]);
    }
	

    ll s = min_val;
    ll e = arr[n-1] - arr[0];
    ll ans = 0;

    while(s<=e)
    {
        ll mid = s + (e-s)/2;

        if(isPossible(arr,n,m,mid))
        {
            ans = max(ans,mid);
			s = mid+1;

        }else{
			e = mid-1;
        }

    }
    return ans;
}

int main()
{
	ll t;
	cin>>t;
	while(t--){
        ll n,c;
        cin>>n>>c;
        ll arr[n];
        for(ll i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
		sort(arr,arr+n);
        cout<<findDistance(arr,n,c)<<endl;
	}
    return 0;

}