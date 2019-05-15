#include <bits/stdc++.h>
using namespace std;
#define LL unsigned long long
#define vi vector<int>
#define srt(a) sort(a.begin(), a.end());
#define se second
#define fi first
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout << fixed;
    LL t; cin>>t;

    while(t--){
        LL n; cin>>n;
        vector <LL> p(n),z;
        forn(i,n){  cin>>p[i];
        }
        srt(p);
        LL an = p[0]*p[n-1];
        for(LL i = 2; i*i<=an;i++){
            if(an%i==0){
                if(i*i==an) z.pb(i);
                else{
                    z.pb(i);
                    z.pb(an/i);
                }
            }
        }
        if(z.size()!=n) {cout<<"-1"<<endl; continue;}
        srt(z);
        if(z!=p){cout<<"-1"<<endl; continue;}
        else{
            cout<<an<<endl;
        }
        
    }
    return 0;
}