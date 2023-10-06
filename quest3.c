#include <stdio.h>
int recursive_function(int i) {
    if (i == 1 || i == 2) {
        return 1;
    }
    return recursive_function(i - 1) + recursive_function(i - 2);
}
int main() {
    int x;
    int x_num = scanf("%d", &x);
    if (x_num == 0) {
        printf("n/a");
        return 0;
    }
    printf("%d", recursive_function(x));
    return 0;
}
