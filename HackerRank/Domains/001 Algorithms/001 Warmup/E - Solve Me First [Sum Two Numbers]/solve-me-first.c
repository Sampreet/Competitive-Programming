#include <stdio.h>

void solveMeFirst(int a, int b) {
    printf("%d", a + b);
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    solveMeFirst(num1, num2);
    return 0;
}