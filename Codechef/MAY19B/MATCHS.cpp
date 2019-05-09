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

LL gg(LL a, LL b,LL p){
    if(a<b) swap(a,b);
    if(b==0) return p^1;
    if(a%b==0) return p;
    if(a>2*b){
        if(gg(b,a%b,p^1) == p || gg(a%b + b,b,p^1) == p)
            return p;
        else return p^1;
    }
        return gg(b,a%b,p^1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout << fixed;
    int t; cin>>t;
    while(t--){
    LL a,b; cin>>a>>b;
cout<<((gg(a,b,1)?"Ari":"Rich"))<<endl;
    }
    return 0;
}