#include<stdio.h>

int sum(int a, int b);
int diff(int a, int b);
int mul(int a, int b);
int quot(int a, int b);

int main(){
    int x, y;
    int x_num = scanf("%d", &x);
    int y_num = scanf("%d", &y);
    
    if ((x_num == 0) || (y_num == 0)){
        printf("n/a n/a n/a n/a");
        return 0;
    }
    
    if (y == 0){
        printf("%d %d %d n/a", sum(x, y), diff(x, y), mul(x, y));
        return 0;
    }
    
    printf("%d %d %d %d", sum(x, y), diff(x, y), mul(x, y), quot(x,y));
    return 0;
}

int sum(int a, int b){
    return a + b;
}

int diff(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}

int quot(int a, int b){
    return a / b;
}
