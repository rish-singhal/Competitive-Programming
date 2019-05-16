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
    vector<LL> pp(6);
    pp[0] = 4;
    pp[1] = 8;
    pp[2] = 16;
    pp[3] = 42;
    pp[4] = 23;
    pp[5] = 15;
    map<LL,pair<LL,LL> > m;
    forn(i,6){
        for(int j = i+1;j<6;j++){
            m[pp[i]*pp[j]] = make_pair(pp[i],pp[j]);
        }
    }
    vector<LL> an(6);
    cout<<"? 1 2"<<endl;
    fflush(stdout);
    LL x; cin>>x;
    LL a,b; tie(a,b) = m[x];
    cout<<"? 2 3"<<endl;
    fflush(stdout);
    cin>>x;
    LL c,d; tie(c,d) = m[x];
    if(a==c){
        an[0] = b;
        an[1] = a;
        an[2] = d;
    }
    else if(a==d){
        an[0] = b;
        an[1] = a;
        an[2] = c;
    }
    else if(b==d){
        an[0] = a;
        an[1] = b;
        an[2] = c;
    }
    else if(b==c){
        an[0] = a;
        an[1] = b;
        an[2] = d;
    }

    cout<<"? 4 5"<<endl;
    fflush(stdout);
    cin>>x;
    tie(a,b) = m[x];
    cout<<"? 5 6"<<endl;
    fflush(stdout);
    cin>>x;
    tie(c,d) = m[x];
    if(a==c){
        an[3] = b;
        an[4] = a;
        an[5] = d;
    }
    else if(a==d){
        an[3] = b;
        an[4] = a;
        an[5] = c;
    }
    else if(b==d){
        an[3] = a;
        an[4] = b;
        an[5] = c;
    }
    else if(b==c){
        an[3] = a;
        an[4] = b;
        an[5] = d;
    }
    cout<<"! ";
    for(auto i:an){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}