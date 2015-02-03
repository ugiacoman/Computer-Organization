#include <stdio.h>

int main() {
    char c;
    int num, total, value;
    
    printf("Input: ");
    c = getchar();
    total, num = 0;
    
    while (c != '\n') {
        value = c - 48;
        num = (num * 10) + value;
        c = getchar();
    }
    
    total = num * num;
    printf("%d\n", total);
    return 0;
}