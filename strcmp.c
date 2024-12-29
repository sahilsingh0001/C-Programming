#include<stdio.h>
void main()
{
    char str[10],strr[10];
    int result;
    printf("Enter the str\n");
    gets(str);
    printf("Enter strr\n");
    gets(strr);
    for(int i =0; str[i] != '\0' || strr[i] != '\0'; i++)
    {
        if(str[i] != strr[i])
        {
            result = 1;
        }
    }
    if(result == 1)
    {
        printf("1");

    }
    else{
        printf("0");
    }
    
}