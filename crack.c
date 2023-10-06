#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    int t = 1000000;
    int x_num = scanf("%le", &x);
    int y_num = scanf("%le", &y);
    
    x *= t;
    y *= t;
    
    if ((x_num == 0) || (y_num == 0)){
        printf("n/a");
        return 0;
    }
    
    if ((x - y) * (x - y) + 2 * x * y < 25000000000000){
        printf("GOTCHA");
    }
    else{
        printf("MISS");
    }

    return 0;
}

