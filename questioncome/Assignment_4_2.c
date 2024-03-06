

#include <stdio.h>

int main()
{
    int i,j,k,l,a,b,r,cont;
    printf("Enter the Row to Print Pattern 2 :");
    scanf("%d",&r);
    b=r;
    cont=11;
    for(i=1;i<=r*2;i+=2)
    {
        for(j=1;j<=b*2;j++)
        {
            printf(" ");
        }
        a=11;
        for(k=cont;k<=11;k++)
        {
            printf("%d ",a);
            a--;
        }
        for(l=cont+1;l<=11;l++)
        {
            printf("%d ",l);
        }
        b--;
        cont--;
        printf("\n\n");
    }
}

/*

#include <stdio.h>

int main()
{
    int s,min,max,i;
    printf("Write the size of the array :");
    scanf("%d",&s);
    int a[s];
    for(i=0;i<s;i++)
    {
        printf("Enter");
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=1;i<s;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    for(i=1;i<s;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Minimum : %d",min);
    printf("Maximum : %d",max);
}



#include <stdio.h>

int main()
{
    int i,sum,avg,s;
    printf("Printe the size of the array :");
    scanf("%d",&s);
    int a[s];
    for(i=0;i<s;i++)
    {
        printf("Enter :");
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/s;
    printf("Average : %d ",avg);
}

#include <stdio.h>

int main()
{
    int i,sum,avg,s;
    printf("Printe the size of the array :");
    scanf("%d",&s);
    int a[s];
    for(i=0;i<s;i++)
    {
        printf("Enter :");
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    int b[s];
    avg=sum/s;
    for(i=0;i<s;i++)
    {
        b[i]=a[i]-avg;
        printf(" %d  ",b[i]);
    }
}



#include <stdio.h>

int main()
{
    int s,i;
    printf("Enter the size of the array ");
    scanf("%d",&s);
    int a[s];
    for(i=0;i<s;i++)
    {
        printf("Enter :");
        scanf("%d",&a[i]);
    }
    for(i=0;i<s;i++)
    {
        printf(" %d ",a[i]);
    }
}

*/