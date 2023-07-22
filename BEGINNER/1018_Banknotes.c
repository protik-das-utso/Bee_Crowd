#include<stdio.h>
#include <math.h>
int main()
{
    int N, a, b, c, d, e ,f ,g ,h, i, j, k, l, m ,n, o ;
    scanf("%d", &N);
    a = N/100;
    b = N - a*100;
    c = b/50;
    d = b - c*50;
    e = d/20;
    f = d - e*20;
    g = f/10;
    h = f - g*10;
    i = h/5;
    j = h - i*5;
    k = j/2;
    l = j - k*2;
    m = l/1;
    n = l- m*1;
    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n", a);
    printf("%d nota(s) de R$ 50,00\n", c);
    printf("%d nota(s) de R$ 20,00\n", e);
    printf("%d nota(s) de R$ 10,00\n", g);
    printf("%d nota(s) de R$ 5,00\n", i);
    printf("%d nota(s) de R$ 2,00\n", k);
    printf("%d nota(s) de R$ 1,00\n", m);
    
    return 0;
}