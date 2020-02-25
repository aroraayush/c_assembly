#include<stdio.h>

int count_zeros_c(int *array, int len);
int count_zeros_s(int *array, int len);

int main(int argc,char **argv){
    int res;
    int arr1[5] = {1,0,1,2,0};

    res = count_zeros_c(arr1,5);
    printf("count_zeros_c((arr1,5), 5) = %d\n",r);

    r = count_zeros_s(a1, 5);
    printf("count_zeros_s({1,0,1,0,1}, 5) = %d\n", r);  

    return 0;
}