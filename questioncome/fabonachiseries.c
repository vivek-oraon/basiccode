// fibonacci series - 0 1 1 2 3 5
#include <stdio.h>

int main()
{
    int a = 0, b = 1, n, t;
    printf("Enter the no of term: ");
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
    {
        if(i>2)
        {
        t = a;
        a = b;
        b = t+b;
            printf(" %d", b);
        } 
        if(i==1)
        {
            printf("%d ", a);
        }
        if(i==2)
        {
            printf("%d ", b);
        }
    }
}