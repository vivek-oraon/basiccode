#include <stdio.h>

int main()
{
    int i,j,k,min,max,s;
    printf("Enter the Size of the Array : ");
    scanf("%d",&s);
    int a[s];
    for(i=0;i<s;i++)
    {
        printf("Enter the value of the Element %d :",i+1);
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(j=1;j<s;j++)
    {
        if(a[j]<min)
        {
            min=a[j];
        }
    }
    for(k=1;k<s;k++)
    {
        if(a[k]>max)
        {
            max=a[k]; // changed from max=a[j]
        }
    }
    printf("The Largest Number in the Array : %d \n",max);
    printf("The Smallest Number in the Array : %d \n",min);
}
