#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50],i;
    printf("string1");
    scanf("%s",s1);
    int len=strlen(s1);
    int d=0,b;
    for(i=len-1;i>=0;i--)
    {
        s2[d]=s1[i];
        d++;
    }
    b=strcmp(s1,s2);
    if(b==0)
    {
        printf("p");
    }
    else
{
    printf ("not");
}
return 0;
}
