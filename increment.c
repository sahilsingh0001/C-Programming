#include<stdio.h>
int main (){
    int m = 10;
    int n,n1;

    n = ++m;
    printf("n = ++m Output is %d\n", n);
    n1 = m++;
    printf("n1 = m++ Output is %d \n", n1);
    // n--
    // --n1
    // n = n-n1

    printf("n -- output is %d \n", n--);
    printf("--n1 output is %d \n", --n1);
    printf(" n = n - n1 output is %d \n", n = n - n1);

    return 0;

}
