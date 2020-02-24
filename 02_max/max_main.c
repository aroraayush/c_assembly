#include<stdio.h>

int max_c(int a, int b);
int max_s(int a, int b);

int main(int argc, char **argv)
{
    int res;

    res = max_c(1, 2);
    printf("max_c(1, 2) = %d\n", res);
    res = max_s(1, 2);
    printf("max_s(1, 2) = %d\n", res);

    res = max_c(-1, 100);
    printf("max_c(-1, 100) = %d\n", res);
    res = max_s(-1, 100);
    printf("max_s(-1, 100) = %d\n", res);    

    return 0;
}