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
    string s;
    cin>>s;
    stack<ll>st;
    FOR(i,0,s.size()-1)
    {
        if(s[i]=='(')
            st.push(i);
        else {
            if(!st.empty())
            {
                cout<<st.top()+1<<" "<<i+1<<endl;
                st.pop();
            }
        }
    }
}
