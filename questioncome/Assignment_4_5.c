#include <stdio.h>

int main()
{
    int s,i,j,a[10],b[10];
    printf("Enter the Size of the Array :");
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        printf("Enter the Value of Element %d :",i+1);
        scanf("%d",&a[i]);
        b[s-(i+1)]=a[i];
    }
    printf("The Reverse Element of Array \n");
    for(j=0;j<s;j++)
    {
        printf("%d  ",b[j]);
    }
}