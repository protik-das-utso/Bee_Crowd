#include <stdio.h>
int main() {
    char name;
    double a, b;
    scanf("%s %lf %lf", &name, &a, &b);
    printf("TOTAL = R$ %.2lf\n", (a + b*0.15));
    return 0;
}
