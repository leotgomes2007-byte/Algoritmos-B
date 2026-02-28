#include <stdio.h>
#include <string.h> // For strlen() function

int main() {
    int i, contar = 0, vogais = 0;
    char p[20];

    printf("Informe uma palavra: ");
    scanf("%s", p);

    // Count characters (alternative to strlen)
    for(i = 0; p[i] != '\0'; i++) {
        contar++;
    }

    if(contar % 2 == 0) {
        // Reverse the word if length is even
        printf("Palavra invertida: ");
        for(i = contar - 1; i >= 0; i--) {
            printf("%c", p[i]);
        }
    } else {
        // Count vowels if length is odd
        for(i = 0; i < contar; i++) {
            char c = tolower(p[i]); // Check both upper and lower case vowels
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vogais++;
            }
        }
        printf("A palavra tem %d vogais", vogais);
    }

    return 0;
}
