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
    string x; cin>>x;
    int k = x.size();
    for(int i=0;i<x.size();){
        int z = i+1;
        while(x[i]==x[z]){
            x[z]='*';
            k--;    
            z++;
        }
        i = z+1;
    }

    if(k%2!=0){
        k--;
    }
    cout<<(x.size()-k)<<endl;
    int j = 1;
    for(int i=0;i<x.size();i++){
        if(x[i]!='*' && j<=k){
            cout<<x[i];
            j++;
        }
    }
    cout<<endl;
    return 0;
}