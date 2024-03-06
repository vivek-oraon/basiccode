#include <stdio.h>

int main()
{
    int i,j;
    float r;
    printf("Enter The No of Rows to Printf the Pattern + :");
    scanf("%f",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r;j++)
        {
            if(i==mid)
            {
                printf("* ");
            }
            else if(j==mid)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
