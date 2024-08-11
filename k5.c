#include<stdio.h>
#include<string.h>
int main()
{
    int a[10],i,j,temp;
for(i=0;i<=9;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<=8;i++)
{
    for(j=i+1;j<=9;j++)
    {
        if(a[j]<a[i])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
for(i=0;i<=9;i++)
{
    printf("%d",a[i]);
}
return 0;
}


