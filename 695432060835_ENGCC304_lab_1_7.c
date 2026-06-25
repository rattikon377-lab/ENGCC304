#include <stdio.h>

int main() {
    char name[50];
    char section[50];

    scanf("%49s %49s", name, section);

    printf("================\n");
    printf("Name: %s\n", name);
    printf("Section: %s\n", section);
    printf("================\n");

    return 0;
}
