#include<stdio.h>
int main()
{
    char s1[50],s2[50],i;
    printf("string1");
    scanf("%s",s1);
    printf("string2");
    scanf("%s",s2);
    for(i=0;s1[i]!='\0';i++)
    {
        s1[i]=(char) s1[i]-32;
    }
    for(i=0;s2[i]!='\0';i++)
    {
        s2[i]=(char) s2[i]+32;
    }
    printf ("%s%s",s1,s2);
    return 0;
}
