#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FILL(a,x) memset(a,x,sizeof(a))
#define FOR(i,l,r) for(ll i=l;i<=r;i++)
#define RFOR(i,l,r) for(ll i=r;i>=l;i--)
#define READ(name) freopen(name".inp","r",stdin); freopen(name".out","w",stdout);

int main()
{
    READ("1");

    ll n,m;
    cin>>n>>m;

    ll x[n+1][m+1];
    FILL(x,0);

    FOR(i,1,n)
    {
        FOR(j,1,m)
        cin>>x[i][j];
    }

    if(x[1][2]==-1&&x[2][1]==-1)
    {
        cout<<-1<<endl;
        return 0;
    }

    ll dp[n+1][m+1];
    FILL(dp,0);

    dp[1][1]=x[1][1];

    FOR(i,1,n)
    if(x[1][i]!=-1)
        dp[1][i]=dp[1][i-1]+x[1][i];
    else dp[1][i]=-1e9;

    FOR(i,1,m)
    if(x[i][1]!=-1)
        dp[i][1]=dp[i-1][1]+x[i][1];
    else dp[i][1]=-1e9;

    FOR(i,2,n)
    {
        FOR(j,2,m)
        {
            if(x[i][j]!=-1)
                dp[i][j]=max(dp[i-1][j],dp[i][j-1])+x[i][j];
            else dp[i][j]=-1e9;
        }
    }
    if(dp[n][m]<0)
        cout<<-1<<endl;
    else
        cout<<dp[n][m]<<endl;
}
/*


 FOR(i,1,n)
    {
        FOR(j,1,m)
        cout<<dp[i][j]<<" ";
        cout<<endl;
    }
    */
