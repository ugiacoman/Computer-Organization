#include <stdio.h>

int main() {
    char c;
    int total, num, value;
    printf("Input: ");
    c = getchar();
    total = 0;
    num = 0;
    while (c != '\n') {
        if (c == ' ') {
            total += num;
            num = 0;
        }
        else {
            value = c - 48;
            num = (num * 10) + value;
        }
        c = getchar();
    }
    total = total + num;
    printf("Total: %d\n", total);
    return 0;
}