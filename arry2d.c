#include<stdio.h>
void main()
{
    int arr[10][10];
    int i,j,row,col;
    printf("Enter the row and column: ");
    scanf("%d%d", &row,&col);
    printf("Enter the elemets of [%d][%d]matrix: \n", row,col);
    for(i = 0; i<row;i++)
    {
        for(j = 0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
printf("The elements are:\n");
     for(i = 0; i<row;i++)
    {
        printf("\n");
        for(j = 0; j<col; j++)
        {
            printf("%d\t",arr[i][j]);
        }
    }
}