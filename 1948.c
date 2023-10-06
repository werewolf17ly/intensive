#include <math.h>
#include <stdio.h>

int dive(int m, int k) {
    int res = -1;
    int i = 0;
    while (m > 0) {
        i += 1;
        m -= k;
        if (m == 0) {
            res = i;
        }
    }
    return res;
}
int fin(int x) {
    int max_prime = 1;
    int i;
    for (i = 1; i <= x; i++) {
        if (dive(x, i) != -1) {
            int j;
            for (j = 2; j < i; j++) {
                if (dive(i, j) != -1) {
                    j = i + 1;
                }
            }
            if (j - i == 0) {
                max_prime = i;
            }
        }
    }
    return max_prime;
}
int main() {
    int x;
    int x_num = scanf("%d", &x);
    if ((x_num == 0) || (x == 0)) {
        printf("n/a");
        return 0;
    }
    if (x < 0) {
        x *= -1;
    }
    int res = fin(x);
    if (res == -1) {
        printf("%d", res);
        return 0;
    }
    printf("%d", res);
    return 0;
}
