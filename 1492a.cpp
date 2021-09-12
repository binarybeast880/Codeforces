#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    long long t, a, b, c, p;
    scanf("%lld", &t);
    while (t--){
        scanf("%lld%lld%lld%lld", &p, &a, &b, &c);
        a = (a-p%a)%a;
        b = (b-p%b)%b;
        c = (c-p%c)%c;
        printf("%lld\n", min(a, min(b, c)));
    }
    return 0;
}
