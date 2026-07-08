#include <stdio.h>
#include <string.h>

int main() {
    char before[10] = "BEFORE";
    char buffer[10];
    char after[10] = "AFTER!";

    printf("before: %s | %p\n", before, (void*)before);
    printf("buffer: %p\n", (void*)buffer);
    printf("after:  %s | %p\n", after, (void*)after);

    printf("\nEnter a string: ");
    scanf("%s", buffer);

    printf("\nbuffer: %s\n", buffer);
    printf("before: %s\n", before);
    printf("after:  %s\n", after);

    return 0;
}