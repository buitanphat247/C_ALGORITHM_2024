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

int main() {
    fast;
    fe("1.inp","r",stdin);
    fe("1.out","w",stdout);
    string x, y;
    cin >> x >> y;
    ll n = x.size(), m = y.size();
    ll dp[n + 10][m + 10];
    FillChar(dp, 0);
    FOR(i, 1, n) {
        FOR(j, 1, m) {
            if (x[i - 1] == y[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    cout<<dp[n][m]<<endl;

    return 0;
}
