#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fe(name_file,tus,type) freopen(name_file,tus,type);
#define FOR(i,l,r) for(ll i=l;i<=r;i++)
#define FillChar(a,x) memset(a,x,sizeof(a))
int main()
{
    fast;
    fe("1.inp","r",stdin);
    fe("1.out","w",stdout);
    ll n,t;
    cin>>n>>t;
    ll x[n+1],dp[n+1];
    FOR(i,1,n)
    {
        cin>>x[i];
        if(i==1)dp[i]=x[i];
        else if(i>1)dp[i]=x[i]+dp[i-1];
    }
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        cout<<dp[y]-dp[x-1]<<endl;
    }
}
