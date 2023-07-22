#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d", &a, &b, &c);
    d = ((a+b+abs(a-b))/2);
    e = ((b+c+abs(b-c))/2);
    if(d>e)
    {
        printf("%d eh o maior\n", d);
    }
    else
    {
        printf("%d eh o maior\n", e);
    }
    return 0;
}