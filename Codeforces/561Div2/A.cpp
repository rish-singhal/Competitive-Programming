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
    LL n; cin>>n;  
    map <int,int> m;
    forn(i,n){
        string x; cin>>x;
        m[x[0]-'a'] ++;
    }
    LL ann[105];
    for1(p,104){
        ann[p] = 1e17;
        for(int k=0;k<=p;k++){
            LL kk = p - k;
            LL kkk = k*(k-1)/2;
            kkk += kk*(kk-1)/2;
            ann[p] = min(ann[p],kkk );
        }
    }
    LL an =0 ;
    for(auto i:m){
        an+=ann[i.se];
    }
    cout<<an<<endl;
    return 0;
}