
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
    LL n,x,y,z; cin>>n>>x>>y;
    string zz; cin>>zz;
    reverse(all(zz));
    LL c = 0;
    int t = 0;
        while(x>0){
            int z = zz[t]-'0';
           // cout<<z%10<<" "<<x<<" "<<y<<" ";
            if(y==0) { if( z%10==0 ) c++;}
            else if(z%10==1) c++;
            z/=10;
            //cout<<c<<" "<<endl;
            y--;x--;
            t++;
        }
    cout<<c<<endl;
    return 0;
}