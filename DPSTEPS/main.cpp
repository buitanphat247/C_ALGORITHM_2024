#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,l,r) for(ll i=l;i<=r;i++)
#define FILL(name,x) memset(name,x,sizeof(name))
const ll mod=1e9+7;
const ll nmax=1e6;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("DPSTEPS.inp","r",stdin);
    freopen("DPSTEPS.out","w",stdout);
    ll n,k;
    cin>>n>>k;
    bool check[n+2];
    FILL(check,false);
    FOR(i,1,k)
    {
        ll x;
        cin>>x;
        check[x]=true;
    }
    ll dp[n+10];
    FILL(dp,0);
    if(check[1]==false)
        dp[1]=1;
    else dp[1]=0;
    if(check[2]==false)
    {
        if(check[1]==true)dp[2]=1;
        else dp[2]=2;
    }
    else
        dp[2]=0;
    for(ll i=3; i<=n; i++)
    {
        if(check[i]==true)
            dp[i]=0;
        else
            dp[i]=((dp[i-1]%mod)+(dp[i-2]%mod))%mod;
    }
    cout<<dp[n]<<endl;
}
