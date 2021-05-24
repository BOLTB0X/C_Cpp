#include <stdio.h>

int main() {
    int s, d, n;
    int sum = 0;
    int i=0;

    scanf("%d %d %d", &s, &d, &n);
    sum = s;
    for(i=1;i<n;i++)
    {
        sum = sum + d;
    } 
    printf("%d", sum);
}

