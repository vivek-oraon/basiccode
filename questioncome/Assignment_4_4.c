#include <stdio.h>

int main()
{
    int a[10],b[10],sum,i,j,s;
    float avg;
    sum=0;
    printf("Enter the Size of Array below 10 :");
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        printf("Enter the Value of Element %d :",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/s;
    for(j=0;j<s;j++)
    {
        b[j]=a[j]-avg;
        printf("%d  ",b[j]);
    }
}