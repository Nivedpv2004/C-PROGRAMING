#include <stdio.h>
int hcf(int a, int b);
int main() {
    int a, b;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    printf("G.C.D of %d and %d is %d.", a, b, hcf(a, b));
    return 0;
}
int hcf(int a, int b) {
    if (b != 0)
        return hcf(b, a % b);
    else
        return a;
}
