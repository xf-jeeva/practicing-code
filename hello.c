#include <stdio.h>
#include <string.h>

int main() {
    // Fixed size character array buffer with a size of 10
    char buffer[10];

    printf("Enter a string: ");

    scanf("%s", buffer);

    // Print entered string
    printf("You entered: %s\n", buffer);

    return 0;
}