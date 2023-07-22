#include <stdio.h>

int main() {
    double A, B, C, e, f, g;
    scanf("%lf %lf %lf",&A, &B, &C);
    e=A*A;
    f=B*B;
    g=C*C;
    if(A>=(B+C) || B>=(A+C) || C>=(A+B))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(e==(f+g) || f==(e+g) || g==(e+f))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if(e>(f+g) || f>(e+g) || g>(e+f))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(e<(f+g) || f<(e+g) || g<(e+f))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(A==B && B==C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(A==B || B==C || C==A)
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}