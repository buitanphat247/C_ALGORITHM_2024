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
    string s,c;
    cin>>s;
    cin>>c;
    for(ll i=0; i<=s.size()-c.size(); i++)
    {
        if(s[i]==c[0]&&s[i+c.size()-1]==c[c.size()-1])
        {
            string z=s.substr(i,c.size());
            if(z==c)
                cout<<i+1<<" ";
        }
    }
}
