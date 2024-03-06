#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++)
    {
        int f;
        scanf("%d", &f);
        a[i] =f;

    }
    for(int j = 0; j<n; j++)
    {
        if(a[0] > a[j])
        {
            int t = a[j];
            a[j] = a[0];
            a[0] = t;
        }
    }
    printf("min:%d", a[0]);
    for(int k = 0; k<n; k++)
    {
        if(a[0] < a[k])
        {
            int t = a[k];
            a[k] = a[0];
            a[0] = t;
        }
    }
    printf("max:%d", a[0]);
}