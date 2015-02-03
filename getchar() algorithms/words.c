
#include <stdio.h>

int main(void)
{
    int wordCount, state;
    char c;
    state = 0;
    wordCount = 0;
    
    printf("Input: ");
    c = getchar();
    while (c != '\n') {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = 0;
        }
        else if (state == 0) {
            state = 1;
            ++wordCount;
        }
        c = getchar();
    }
    
    printf("Wordcount: %d\n", wordCount);
    return 0;
}