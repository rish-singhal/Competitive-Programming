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
    int n; cin>>n;
    while(n--){
        int k; cin>>k;
        string x; cin>>x;
        if(k<11){
            cout<<"NO\n";
            continue;
        }
        if(k==11){ if( x[0]!='8'){
            cout<<"NO\n"; }
            else cout<<"YES\n";
        }
        else{
            int j;
            int p = k-11;
            forn(i,k){
                if(x[i]=='8'){
                    j = i; break;
                }
                p--;
            }
            if(p<0){
                cout<<"NO\n";
                continue;
            }
            if(k-j-1<p){
                cout<<"NO\n";
                continue;
            }
             cout<<"YES\n";
        }
    }
    return 0;
}