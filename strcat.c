#include<stdio.h>

void main()
{
    char str1[21],str2[21],str3[41];
    int i,j;
    printf("Enter the first string\n");
    fgets(str1,21,stdin);
    printf("Enter the second string\n");
    fgets(str2,21,stdin);
    printf("First string: %s \n", str1);
    printf("Second string: %s \n", str2);

    for(i=0,j=0; str1[i]!='\0'; i++)
    {
        if(str1[i] != '\n')
        {
            str3[j++] = str1[i];
        }
    }
    // str3[j++] = 0;

    for(i = 0; str2[i]!= '\0'; i++)
    {
    if(str2[i]!= '\n')
    {
        str3[j++] = str2[i];
    }

    }
    str3[j] = '\0';
    printf("concatenated string: %s \n", str3);
}