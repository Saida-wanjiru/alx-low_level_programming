#include <stdio.h>

int main(int argc, char *argv[]) {
    // Check if there are exactly two arguments
    if (argc != 3) {
        printf("Usage: %s arg1 arg2\n", argv[0]);
        return 1;  // Return an error code
    }

    // Print the two arguments
    printf("Argument 1: %s\n", argv[1]);
    printf("Argument 2: %s\n", argv[2]);

    return 0;  // Return success
}
