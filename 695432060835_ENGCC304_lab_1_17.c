#include <stdio.h>

int main() {
    char computer[50];
    char user[50];

    scanf("%49s %49s", computer, user);

    printf("Computer: %s\n", computer);
    printf("User: %s\n", user);
    printf("Login success\n");

    return 0;
}