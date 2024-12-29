#include<stdio.h>
void main()
{
    int i,j,n,arr[100],temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i<n; i++)
    {
        for(j = i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            temp = arr[i];
            arr[i]= arr[j];
            arr[j] = temp;
        }
    }

    printf("sorted elements are:\n");
    for(i = 0; i<n; i++)
    {
        printf("%d", arr[i]);
    }

}