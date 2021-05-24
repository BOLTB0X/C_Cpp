#include <stdio.h>

int main() {
    int w, h,n,x,y,d,l;
    int m[100][100] = {NULL};

    scanf("%d %d", &h, &w);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d", &l, &d, &x, &y);
        if (d == 0) {
            for (int j = 0; j < l; j++) {
                m[x-1][y-1 + j] = 1;
            }
        }
        else {
            for (int j = 0; j < l; j++) {
                m[x-1 + j][y-1] = 1;
            }
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}
