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
    string a;
    cin>>a;
    n=a.size();
    vector<string>v;
    v.pb("ZERO");
    v.pb("ONE");
    v.pb("TWO");
    v.pb("THREE");
    v.pb("FOUR");
    v.pb("FIVE");
    v.pb("SIX");
    v.pb("SEVEN");
    v.pb("EIGHT");
    v.pb("NINE");
    FOR(z,0,v.size()-1)
    {
        string b=v[z];
        m=b.size();
        ll dp[n+10][m+10];
        FILL(dp,0);
        FOR(i,1,n)
        {
            FOR(j,1,m)
            {
                if(a[i-1]==b[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        if(dp[n][m]==b.size())
        {

            cout<<b<<endl;
            return 0;
        }

    }
    cout<<"CHIA BUON, PHAI VE ROI, HEN NAM SAU NHE!!"<<endl;
}
