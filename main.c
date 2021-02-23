#include <stdio.h>

int addFunc(int n, int m);

int main() {
    int x1 = 5;
    int x2 = 7;
    int sum = addFunc(x1, x2);
    printf("%i", sum);

    return 0;
}

int addFunc(int n, int m) {
    return n + m;
}