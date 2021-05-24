#include <stdio.h>

int main() {
    long long int a, r, d,n;
    int i;

    scanf("%lld %lld %lld %lld", &a, &r,&d, &n);

    for(i=1;i<n;i++)
    {
        
            a *= r;
            a += d;
    } 
    printf("%lld", a);

}

