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


int uf[500005];
int par(int x){
    return uf[x]<0?x:uf[x]=par(uf[x]);
}
void join(int x,int y){
    x = par(x);
    y = par(y);
    if(x==y) return ;
    if(uf[x]>uf[y]){
        swap(x,y);
    }
    uf[x] += uf[y];
    uf[y] = x;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout << fixed;
    LL n,w ;cin>>n>>w;
    forn(i,n){
        uf[i] = -1;
    }
    forn(i,w){
        int k; cin>>k;
        vector<int> x(k);
        forn(j,k){
            cin>>x[j];
            x[j];
        }   
        for1(j,k-1){
            join(x[0],x[j]);
        }  
    }
    for1(i,n){
        cout<<(-uf[par(i)])<<" ";
    }
    cout<<endl;
    return 0;
}