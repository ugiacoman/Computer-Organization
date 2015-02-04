#include <stdio.h>

int main() {
    int i, y, square, total;
    printf("Please input a number: ");
    scanf("%d", &i);
    for (y = 1 ; y <= i; y = y + 1 ){
        square = y * y;
        total = total + square;
        printf("The square of %d is %d\n", y, square);
    }
    printf("The sum of the squares is %d\n", total);
    return 0;
}
