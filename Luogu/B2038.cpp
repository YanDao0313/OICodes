#include <stdio.h>
int main ()
{
    char b;
    scanf("%c",&b);
    int a=b;
    if(a%2==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}