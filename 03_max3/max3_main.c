#include<stdio.h>

int max3_c(int a, int b, int c);
int max3_s(int a, int b, int c);

int main(int argc, char **argv)
{
    int res;

    res = max3_c(1, 2, 3);
    printf("max3_c(1, 2, 3) = %d\n", res);
    res = max3_s(1, 2, 3);
    printf("max3_s(1, 2, 3) = %d\n", res);

    res = max3_c(-1, 100, 0);
    printf("max3_c(-1, 100, 0) = %d\n", res);
    res = max3_s(-1, 100, 0);
    printf("max3_s(-1, 100, 0) = %d\n", res);    

    return 0;
}