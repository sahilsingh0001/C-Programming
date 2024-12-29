#include<stdio.h>

int sum(int a, int b);

int main() {
    int a,b ;
    printf("Enter The 1st Number : ");
    scanf("%d", &a);
    printf("Enter The 2nd Number");
    scanf("%d", &b);

    int s = sum(a,b);
    printf("The Sum IS : %d", s);
return 0;
}

int sum (int a, int b){
    return a+b;
}




// Can be done like that also bass a aur b ki value x aur y me copy ho jayengi.....


// #include<stdio.h>

// int sum(int a, int b);

// int main() {
//     int a,b ;
//     printf("Enter The 1st Number : ");
//     scanf("%d", &a);
//     printf("Enter The 2nd Number");
//     scanf("%d", &b);

//     int s = sum(a,b);
//     printf("The Sum IS : %d", s);
// return 0;
// }

// int sum (int x, int y){
//     return x+y;
// }