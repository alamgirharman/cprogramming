#include <stdio.h>

int main() {
    int ch;
    ch = 'O';

    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || 
        ch == 'i' || ch == 'I' || 
       ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
        printf("%c is vowel\n", ch);
    } else {
        printf("%c is consonant\n");
    }

    return 0;
}