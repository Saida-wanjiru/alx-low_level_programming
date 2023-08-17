#include <stdio.h>

int _isupper(int c); // Prototype declaration

int main() {
    char ch = 'A';
    
    if (_isupper(ch)) {
        printf("%c is uppercase.\n", ch);
    } else {
        printf("%c is not uppercase.\n", ch);
    }
    
    return 0;
}

