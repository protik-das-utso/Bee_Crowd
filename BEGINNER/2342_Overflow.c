#include <stdio.h>

int main() {
    long long int N, P, Q;
    char C;
    scanf("%lld", &N);
    scanf("%lld %c %lld", &P, &C, &Q);
    if(C==43)
    {
        if(N==(P+Q) || N>(P+Q))
        {
            printf("OK\n");
        }
        else if(N<(P+Q))
        {
            printf("OVERFLOW\n");
        }
    }
    else if(C==42)
    {
        if(N==(P*Q) || N>(P*Q))
        {
            printf("OK\n");
        }
        else if(N<(P*Q))
        {
            printf("OVERFLOW\n");
        }
    }

        
    return 0;
}