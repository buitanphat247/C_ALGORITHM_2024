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
    ll k;
    string s;
    cin>>s;
    cin>>k;
    string z = "abcdefghijklmnopqrstuvwxyz";
    string z1;
    for(long long i=0;i<z.size();i++)
    {
        long long index=i+k;
        if(index>=z.size())
        {
            index=index%z.size();
        }
            z1=z1+z[index];
    }
    for(long long i=0;i<s.size();i++)
    {
        for(long long j=0;j<z1.size();j++)
        {
            if(s[i]==z1[j])
                cout<<z[j];
        }
    }

}
