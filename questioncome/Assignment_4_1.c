#include <stdio.h>

int main()
{
    int i,j,k,r,cont;
    printf("Enter the Number of Row to Print a Pattern :");
    scanf("%d",&r);
    cont=r*2-1;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("  ");
        }
        for(k=1;k<=cont;k++)
        {
            printf("* ");
        }
        cont-=2;
        printf("\n\n");
    }
}