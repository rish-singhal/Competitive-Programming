#include <bits/stdc++.h>
using namespace std;
#define LL long long
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
    LL z; cin>>z;
    vector< LL> p,n;
    int po =0;
    forn(i,z) {
        LL o; cin>>o;
        if(o>0) p.pb(o);
        else n.pb(-o);
    }
    srt(p);
    srt(n);
    LL an =0;
    for(auto i:p){
        an += upper_bound(all(p),2*i) - upper_bound(all(p),i) ;
        an += upper_bound(all(n),2*i) - upper_bound(all(n),i) ;
        an += upper_bound(all(n),i) - lower_bound(all(n),i) ;
    }
    for(auto i:n){
        an += upper_bound(all(n),2*i) - upper_bound(all(n),i) ;
        an += upper_bound(all(p),2*i) - upper_bound(all(p),i) ;
    }

    cout<<an<<endl;

    return 0;
}