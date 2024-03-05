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
#define FILL(a,x) memset(a,x,sizeof(a))
int main()
{
    fast;
    fe("1.inp","r",stdin);
    fe("1.out","w",stdout);
    ll n,m;
    cin>>n>>m;
    ll x[n+10][m+10];
    FOR(i,0,n-1)
    FOR(j,0,m-1)
    cin>>x[i][j];
    ll dp[n+10][m+10];
    FILL(dp,0);
    dp[0][0]=x[0][0];
    FOR(i,1,n-1)dp[0][i]=dp[0][i-1]+x[0][i];
    FOR(i,1,m-1)dp[i][0]=dp[i-1][0]+x[i][0];
    FOR(i,1,n-1)
    {
        FOR(j,1,m-1)
        dp[i][j]=max(dp[i-1][j],dp[i][j-1])+x[i][j];
    }
    cout<<dp[n][m]<<endl;
}
