#include <stdio.h>

int main() {
    char studentId[20];
    char nickname[50];
    char section[20];

    scanf("%s %s %s", studentId, nickname, section);

    printf("Student ID: %s\n", studentId);
    printf("Nickname: %s\n", nickname);
    printf("Section: %s\n", section);

    return 0;
}
