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

int main()
{
    fast;
    ll n,s;
    cin>>n>>s;
    vector<ll> w(n+1), v(n+1);
    FOR(i,1,n){
        cin>>w[i];
        cin>>v[i];
    }
    vector<ll> dp(s+1, 0); // Sử dụng mảng một chiều thay vì mảng hai chiều
    for(ll i = 1; i <= n; ++i) {
        for(ll j = s; j >= w[i]; --j) { // Lặp ngược từ s về w[i]
            dp[j] = max(dp[j], dp[j-w[i]] + v[i]);
        }
    }
    cout<<dp[s]<<endl;
}
