#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char os[50];
    char editor[50];

    scanf("%49s %49s", os, editor);

    printf("OS: %s\n", os);
    printf("Editor: %s\n", editor);
    printf("Ready to code!\n");

    return 0;
}
