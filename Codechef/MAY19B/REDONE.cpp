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
const LL m = 1e9+7; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout << fixed;
    LL f[1000005];
    f[0]=1;
    for1(i,1000000) f[i] = f[i-1]*i%m;
    int t; cin>>t;
    while(t--){
        LL k; cin>>k;
        cout<<((f[k+1]-1+m)%m)<<endl;
    }
    return 0;
}