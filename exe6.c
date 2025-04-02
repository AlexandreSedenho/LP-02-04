#include <stdio.h>

int main() {
    for(int a = 0; a < 2; a++) {
        printf("A: %d ", a);
        printf(" ! %d = %d\n", a, !a);
    }
    return 0;
}