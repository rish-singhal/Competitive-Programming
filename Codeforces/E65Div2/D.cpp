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
    string x; cin>>x;
    int z=0,o=0;
    for(auto i:x){
        if(i=='('){
            if(z<o){ z++;
                cout<<0;}
            else {
                o++;
                cout<<1;
            }
        }
        else{
            if(z>o){
                z--;
                cout<<0;
            }
            else {
                o--;
                cout<<1;
            }
        }
    }
    cout<<endl;
    return 0;
}