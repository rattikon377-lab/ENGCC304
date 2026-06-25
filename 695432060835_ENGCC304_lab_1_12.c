#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char word[50];

    scanf("%49s", word);

    printf("You typed: \"%s\"\n", word);

    return 0;
}
