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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout << fixed;
    LL q; cin>>q;
    while(q--){
        LL a,b,m; cin>>a>>b>>m;
        if(a==b){
            cout<<1<<" "<<a<<endl;
            continue;
        }
        if(b<=a+m){
            if(b>a){
                cout<<"2 "<<a<<" "<<b<<endl;
            }
            else{
                cout<<-1<<endl;
            }
            continue;
        }
         LL k=-1;
        for(LL i=1;i<=46;i++){
            LL z0 = (1LL<<i)*(a+1);
            LL z1 = (1LL<<i)*(a+m);
            if(b>=z0 && b<=z1) { k = i; break;}
        }
        if(k==-1) cout<<"-1"<<endl;
        else{
                
                LL pp = b - ((1LL<<k)*(a+1));
                LL aa = pp/((1LL<<k));
                LL ppp = pp%((1LL<<k));
                LL su = a;
                //cout<<aa<<" "<<ppp<<endl;
                cout<<(k+2)<<" "<<a<<" ";
                for(int i=0;i<k+1;i++){

                    LL ops = su + 1+aa +((ppp>>(k-i-1))&1);
                    cout<<(ops)<<" ";
                    su+=ops;
                }
                cout<<endl;
        }
    }

    return 0;
}