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

pair<int,int> norm(int a,int b,int ch){
  //  if(a==0 && b==9) return make_pair(0,0);
 //   if(b==0) return make_pair(ch?1:abs(a),0);
    if(a==0) return make_pair(0,1);
    int t1 = a;
    int t2 = b;
    a = a/__gcd(t1,t2);
    b = b/__gcd(t1,t2);
    if(b<0) { b*=-1; a*=-1;}
    return make_pair(a,b);
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout << fixed;
    int n; cin>>n;
    vector <pair<int,int>> p;
    map<pair<int,int>,set<pair<int,int> > > m,mo;
    map<pair<int,int> ,LL> cp;
    forn(i,n){
        int u,v; cin>>u>>v;
        p.pb(make_pair(u,v));
    }

    LL tc = 0;
    for(int i=0;i<p.size();i++){
        for(int j=i+1;j<p.size();j++){
            auto z = norm(p[i].se - p[j].se,p[i].fi -p[j].fi,1);
            auto c = norm(p[i].fi*p[j].se - p[j].fi*p[i].se,p[i].fi-p[j].fi,0);
            if(p[i].fi==p[j].fi){
                z = make_pair(1,0);
                c = make_pair(p[i].fi,0);
            }

            if(m[z].find(c)==m[z].end()){
                tc++;
                cp[z]++;
                m[z].insert(c);
            }
        }
    }
    LL an = tc*(tc-1)/2;
   // cout<<tc<<" -- "<<endl;
    for(auto i:cp){
     //   cout<<i.fi.fi<<" "<<i.fi.se<<" :";
        an -= i.se*(i.se-1)/2;
       // cout<<i.se<<"\n";
    }
    //cout<<endl;
    cout<<an<<endl;
    return 0;
}