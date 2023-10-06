#include <stdio.h>

void maxmin(int prob1, int prob2, int prob3, int *max, int *min);

/* Find a max & min probabilities */
int main() {
    int x, y, z;
    int x_num = scanf("%d", &x);
    int y_num = scanf("%d", &y);
    int z_num = scanf("%d", &z);
    if ((x == 0) || (x_num == 0) || (y == 0) || (y_num == 0) || (z == 0) || (z_num == 0)) {
        printf("n/a");
        return 0;
    }
    int max, min;
    maxmin(x, y, z, &max, &min);
    printf("%d %d", max, min);
    return 0;
}
/* This function should be kept !!! (Your AI) */
/* But errors & bugs should be fixed         */
void maxmin(int prob1, int prob2, int prob3, int *max, int *min) {
    *max = *min = prob1;
    if (prob2 > *max) {
        *max = prob2;
    }
    if (prob2 < *min) {
        *min = prob2;
    }
    if (prob3 > *max) {
        *max = prob3;
    }
    if (prob3 < *min) {
        *min = prob3;
    }
}
