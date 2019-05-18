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
    if(n<25) cout<<-1<<endl;
    else{
        LL k = 0,kk = 0, f = 0;
        for(int i=5;i<=n;i++){
            if(n%i==0){
                if((n/i) >=5 ){
                    k = i, kk= n/i, f= 1;
                }
            }
        }
        if(f==0) cout<<-1<<endl;
        else{
            char x[5]; x[0]='a',x[1]='e',x[2]='i',x[3]='o',x[4]='u';
            int t = 0;
            for(int i=1;i<=k;i++){
                for(int j=1;j<=kk;j++){
                    cout<<x[(t+j)%5];
                }
                t++;
            }
            cout<<endl;
        }
    }
    return 0;
}