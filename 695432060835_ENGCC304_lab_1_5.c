#include <stdio.h>

int main() {
    char hardware[20];
    char software[50];

    scanf("%19s %49s", hardware, software);

    printf("Hardware: %s\n", hardware);
    printf("Software: %s\n", software);
    printf("Both work together.\n");

    return 0;
}
