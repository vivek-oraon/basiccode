#include <stdio.h>

int main()
{
    int a=11, n=3,m = 6,dec, inc;
    for(int i = 0; i<=n; i++)
    {
        dec =0;
        inc= 0;
        printf("    ");
        for(int k = 0; k<=m-i*2;k++)
        {
            printf(" ");
        }
        for(int j =0; j<=m; j++)
        {
            if(j==(m/2)-i || j == (m/2) + i)
            {
                printf("%d ", a);
            }
            else if(j>(m/2)-i && j<=(m/2))
            {
                dec++;
                if(a-dec<10)
                {
                    printf(" %d ", a-dec);
                }
                else{
                    printf("%d ", a-dec);
                }
            }
            else if(j>(m/2) && j<(m/2)+i)
            {
                inc++;
                if(a-dec<10)
                {
                    printf(" %d ", (a-dec)+inc);
                }
                else{
                    printf("%d ", (a-dec)+inc);
                }

            }
            else{
                printf(" ");
            }
        }
        printf("\n\n");
    }
}