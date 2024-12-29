#include<stdio.h>
void main(){
    int a[100],n,search,i;
    printf("Enter the values n: \n");
    scanf("%d", &n);
    printf("Enter the elements of array \n");
    for( i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The value to search\n");
    scanf("%d", &search);
    for(i = 0; i<n; i++)
    {
        if(a[i]==search)
        {
            printf("The value %d is present at location a[%d] \n", search,i);
        break;
        }
        
    }
    if(i==n)
        {
            printf("the value %d is not present\n", search);
        }
}