#include <stdio.h>

int main() {
    long long int w, h, b;
    double result;
    scanf("%lld %lld %lld", &w, &h, &b);
    result = w * h * b;
    printf("%.2lf MB", result / (8 * 1024 * 1024));

}

