#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0){
    printf("%d positive",a);
    }
    if(a==0)
    {
        printf("%d zero",a);
    }
    else
    {
        printf("%d negative",a);
    }
    return 0;
}

