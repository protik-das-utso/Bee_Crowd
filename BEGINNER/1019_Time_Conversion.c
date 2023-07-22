#include <stdio.h>
int main()
{
    int N, M, H, S;
    scanf("%d", &N);
    S = N % 60;
    M = (N / 60) % 60;
    H = N / 3600;
    printf("%d:%d:%d\n", H, M, S);
    return 0;
}