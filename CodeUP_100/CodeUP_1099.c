#include <stdio.h>

int main(){
int x, y;
    int m[10][10] = {NULL};

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    x = 2;
    y = 2;

    while (1) {
        if (m[x-1][y-1] == 2) {
            m[x-1][y-1] = 9;
            break;
        }
        if (m[x-1][y] != 1) {
            m[x-1][y-1] = 9;
            y += 1;
        }else{
            if (m[x][y-1] != 1) {
                m[x - 1][y - 1] = 9;
                x += 1;
            }
            else {
                m[x - 1][y - 1] = 9;
                break;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}
