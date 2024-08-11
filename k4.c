#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d",&age);
    if((age>=18)&&(age%3==0))
    {
        printf("yes\n");
    }
    else
    {
        ("no\n");
    }
    return 0;
}
