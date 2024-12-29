#include<stdio.h>
#include<string.h>
void main(){
  char str[40],org[40];
  printf("Enter the string: \n");
  scanf("%s", str);
  strcpy(org,str);
  int length = strlen(str); 
  for(int i = 0, j = length -1; i<j; i++,j--)
  {
    char temp = str[i];
    str[i] = str[j];
    str[j] = str[i];
  } 
int result = strcmp(org,str);
if(result == 0)
{ 
  printf("The string is palindrome\n");

}
else{
  printf("The string is not palindrome");
}
}