#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, xn, n, xk;
    int count = 1;
    printf("type an int: \n");
    scanf("%f", &x);
    printf("enter estimate: \n");
    scanf("%f", &n);

    while(count<=10){
        xn = ((0.5)*(n+(x/n)));
        printf("%f\n", xn);
        n = xn;
        count++;
    }
    return 0;
}

