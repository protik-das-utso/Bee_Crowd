#include <stdio.h>
int main() {
    double R;
    scanf("%lf", &R);
    printf("VOLUME = %.3lf\n", (4.00/3)*3.14159*R*R*R);
    return 0;
}