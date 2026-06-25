#include <stdio.h>
#include <fcntl.h>
#include <io.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    char name[100];
    scanf("%s",name);
    printf("Hello, %s\n",name);
    printf("Welcome to C Programming\n");

    return 0;
}