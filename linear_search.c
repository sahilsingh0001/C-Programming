#include<stdio.h>
void main()
{
    int a[100],n,i,s;
printf("Enter The Size of Aaray\n");
scanf("%d", &n);
printf("Enter the n elements of array\n");
for(i = 0; i<n; i++)
{
scanf("%d", &a[i]);
}
printf("Enter The Number to Search:  \n");
scanf("%d", &s);
for(i = 0; i<n; i++)
{
   if(a[i] == s)
   {
    printf("The %d value is present at the %d location", n,i+1);
    break;
   }

   
    }
    if(i == n)
    {
        printf("n is not present in the array\n");
    }

}




