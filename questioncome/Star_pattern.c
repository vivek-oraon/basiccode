#include <stdio.h>
#include <math.h>

int main()
{
    int i,j;
    float r,mid,cont;
    printf("Enter The No of Row for Printing the Pattern x :");
    scanf("%f",&r);
    cont=r;
    mid=ceil(r/2);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r;j++)
        {
            if(j==i || j==cont)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        cont--;
        printf("\n");
    }
}