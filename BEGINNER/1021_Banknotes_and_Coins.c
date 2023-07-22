#include<stdio.h>
#include <math.h>
int main()
{
    double N, a, b, c, d, e ,f ,g ,h, i, j, k, l, m ,n, o, M, A, B, C, D, E, F, G ,H ,I, J;
    scanf("%lf", &N);
    M = N-(int)N;
    a = N/100.0;
    b = N - (int)a*100.0;
    c = b/50.0;
    d = b - (int)c*50;
    e = d/20;
    f = d - (int)e*20;
    g = f/10;
    h = f - (int)g*10;
    i = h/5;
    j = h - (int)i*5;
    k = j/2;
    l = j - (int)k*2;
    m = l/1;
    
    
    A = M/0.50;
    B = M - (int)A*0.50;
    C = B/0.25;
    D = B - (int)C*0.25;
    E = D/0.1;
    F = D - (int)E*0.1;
    G = F/0.05;
    H = F -(int)G*0.05;
    I = H/0.01;
    J = H - (int)I*0.01;
    
    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", (int)a);
    printf("%d nota(s) de R$ 50.00\n", (int)c);
    printf("%d nota(s) de R$ 20.00\n", (int)e);
    printf("%d nota(s) de R$ 10.00\n", (int)g);
    printf("%d nota(s) de R$ 5.00\n", (int)i);
    printf("%d nota(s) de R$ 2.00\n", (int)k);
    
    
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", (int)m);
    printf("%d moeda(s) de R$ 0.50\n", (int)A);
    printf("%d moeda(s) de R$ 0.25\n", (int)C);
    printf("%d moeda(s) de R$ 0.10\n", (int)E);
    printf("%d moeda(s) de R$ 0.05\n", (int)G);
    printf("%d moeda(s) de R$ 0.01\n", (int)I);
    
    return 0;
}