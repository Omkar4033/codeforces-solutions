#include <bits/stdc++.h>
using namespace std;
#define test(t) \
    int t;      \
    cin >> t;   \
    while (t--)
#define ll long long
bool ispossible(vector<ll>arr,ll k,ll h)
{
    ll sum=0;
    int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        
        sum+=min(arr[i+1]-arr[i],k);
    }
    return (sum+k)>=h;
}
int main()
{
    test(t)
    {
        int n;
        ll h;
        cin>>n>>h;
       vector<ll>arr;
       for(int i=0;i<n;i++)
       {
        int temp;
        cin>>temp;
        arr.push_back(temp);
       }
       ll ans=0;
       ll start=0;
       ll end=1e18;
       while(end>=start)
       {
        ll mid=start+(end-start)/2;
        if(ispossible(arr,mid,h))
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
       }
       cout<<ans<<endl;
    }
return 0;
}