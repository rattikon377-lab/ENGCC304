#include <stdio.h>

int main() {
    char sourceCode[50];
    char compiler[50];
    char program[50];

    scanf("%49s %49s %49s", sourceCode, compiler, program);

    printf("Source Code: %s\n", sourceCode);
    printf("Compiler: %s\n", compiler);
    printf("Program: %s\n", program);

    return 0;
}
