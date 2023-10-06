#include <stdio.h>
#include <math.h>

double val(double x);

int main()
{
    double x;
    int x_num = scanf("%le", &x);
    
    if (x_num == 0){
        printf("n/a");
        return 0;
    }
    
    printf("%.1f", val(x));
    return 0;
}

double val(double x){
    double a1, a2, a3, a4, ans1,ans2;
    a1 = 0.007 * pow(x, 4);
    a2 = (22.8 * pow(x, 1 / 3) - 1000) * x + 3;
    a3 = x * x / 2;
    a4 = x * pow((10 + x), (2/x));
    ans1 = a1 + a2/a3 - a4 - 1.01;
    ans2 = round(ans1 * 10)/10;
    return ans2;
}
