#include <stdio.h>
#define LL long long
LL gg(LL a, LL b, LL p){
    if(a<b){
        LL t = b;
        b = a;
        a = t;
    }
    if(a%b==0) return p;
    if(a/b > 1){
        if(gg(b,a%b,p^1) == p || gg(a%b + b,b,p^1) == p)
            return p;
        else return p^1;
    }
    return gg(b,a%b,p^1);
}

int main()
{
    int t; scanf("%d",&t);
    while(t--){
    LL a,b; scanf("%lld%lld",&a,&b);
    if(gg(a,b,1)){
        printf("Ari\n");
    }
    else {
        printf("Rich\n");
    }
    
    }
    return 0;
}