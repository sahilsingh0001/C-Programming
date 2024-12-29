#include<stdio.h>
void main()
{
    int a[5] = {1,2,3,4,5};
    int*p = a;
    printf("%d\n%d\n%d\n",*(p++),*(p++),*(p++));
    // comma operator accociativity right to left
    //comma ke left se operation hona start hoga 
}

// #include<stdio.h>
// void main()
// {
//   int a = 10;
//   printf("%d\n%d\n%d\n", a++,a++,a++);
//     // comma operator accociativity right to left

// }
#include<stdio.h>
void main()
{
   int a = 10;
   printf("%d", ((a = a+1)*(a = a-1)));
   printf("%d",++a*a--);
   printf("%d", ++a*--a);
}