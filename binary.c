#include<stdio.h>
int main()
{
    int low,high,n,key,mid,arr[100],i,j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
for(i = 0; i<n; i++)
{
    scanf("%d", &arr[i]);
}
printf("Array elements are: \n");
for(i = 0; i<n; i++)
{
    printf("%d\n", arr[i]);
}
printf("Enter the value to find: ");
scanf("%d", &key);
low = 0;
high = n-1;
mid = (high + low)/2;
while(low<=high)
{
    if (arr[mid] < key)
    {
        low = mid + 1;
        mid = ( low + high)/2;
    }
    
    else if (arr[mid] == key)
    {
        printf("Your element %d is found at %d location", key, mid+1);
        break;

    }
    else
    {
    high = mid - 1;
    mid = ( low + high)/2;
}

    
}
if(low>high)
{
    printf("Not found %d", key);
}
}