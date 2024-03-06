#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++)
    {
        int v;
        scanf("%d", &v);
        a[i] = v;
    }
    int sum = 0;
    for(int j = 0; j<n; j++)
    {
        sum+=a[j];
    }
    int average = sum/n;
    printf("average:%d\n", average);
    for(int k = 0; k<n; k++)
    {
        printf("%d\n", average-a[k]);
    }
}