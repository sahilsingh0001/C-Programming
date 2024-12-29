#include<stdio.h>
int main(){
    int i,n,fact = 1;
    printf("Enter the value of n");
    scanf("%d", &n);
    if(n<0){
        printf("The factorial doesn't exists");

    }
    else{
        for(int i=1;i<=n;++i)
        {
            fact = fact*i;
            
        }

    }
    printf("The Factorial of %d is %d", n,fact);
    return 0;
}