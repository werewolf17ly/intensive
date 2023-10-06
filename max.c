#include <stdio.h>

int max(int x, int y);

int main()
{
    int x, y;
    int x_num = scanf("%d", &x);
    int y_num = scanf("%d", &y);
    
    if ((x_num == 0) || (y_num == 0)){
        printf("n/a");
        return 0;
    }
    
    printf("%d", max(x, y));
    return 0;
}

int max(int x, int y){
    int ans = x;
    if (y > ans)
        ans = y;
    return ans;
}
