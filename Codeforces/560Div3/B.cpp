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
    multiset<LL> s;
    forn(i,n){
        LL x;cin>>x;
        s.insert(x);
    }
    if(1 > *s.begin()){
        cout<<0<<endl; 
    }
    LL d = 1;
    while(s.size()){
        while(d > *s.begin()){
            s.erase(s.begin());
            if(s.size()==0){ 
                cout<<(d-1)<<endl; 
                return 0;}
        }
        if(d <= *s.begin()){
            s.erase(s.begin());
            d++;
        }
    }
    cout<<(d-1)<<endl;
    return 0;
}