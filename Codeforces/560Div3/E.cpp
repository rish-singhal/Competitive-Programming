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
const LL m =998244353;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout << fixed;
    LL n; cin>>n;
    vector <LL> b(n),p(n);
    forn(i,n){
        LL x; cin>>x;
        x %=m;
        p[i] = ((x * (i+1))*(n-i));
    }
    forn(i,n){
        cin>>b[i];
    }
    srt(b);
    srt(p);
    reverse(all(b));
    int t = 0;
    LL an = 0; 
    forn(i,n){
        b[i]%=m;
        p[i]%=m;
        an = ( an + (b[i]*p[i]%m)  +m)%m;
    }
    cout<<an<<endl;
    return 0;
} 