#include<stdio.h>
int power(int x, int n);
int main()
{
  int x,n;
  printf("The Value of X^N\t");
  scanf("%d%d", &x,&n);
  printf("%d^%d = %d", x,n,power(x,n));
}
int power(int x, int n)
{
  if(n == 1)
  {
    return 1;
  }
  int p = (x * power(x,n-1));
  return p;
}


#include<stdio.h>
int sum(int n);
int main()
{
  int n;
  printf("Enter the number\t");
  scanf("%d", &n);
  int x = sum(n);
  printf("Sum of digits are: %d", x);
  return 0;

}

int sum(int n)
{
  if(n<1)
{
  return 0+;
}
  int sum1 = (n%10 + sum(n/10));
  return sum1;
}
