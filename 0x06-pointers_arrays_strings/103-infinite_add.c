clude <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

void infiniteAdd(char *num1, char *num2, char *result, int maxLength) {
    int carry = 0;
    int i = 0;

    reverseString(num1);
    reverseString(num2);

    while (num1[i] != '\0' || num2[i] != '\0' || carry != 0) {
        int digit1 = num1[i] - '0';
        int digit2 = num2[i] - '0';

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        int digitSum = sum % 10;

        result[i] = digitSum + '0';

        i++;

        if (i >= maxLength - 1) {
            printf("Result is too long for the allocated buffer.\n");
            return;
        }
    }

    result[i] = '\0';
    reverseString(result);
}

int main() {
    char num1[] = "12345678901234567890";
    char num2[] = "98765432109876543210";
    char result[100]; // Adjust the buffer size as needed

    infiniteAdd(num1, num2, result, sizeof(result));

    printf("Result: %s\n", result);

    return 0;
}

