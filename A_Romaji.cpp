#include <stdio.h>
 
int main() {
    char ch;
    int point = 1;  // flag to track if the word is Berlanese
 
    // Read input until newline (end of the word)
    while ((ch = getchar()) != '\n') {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'n') {
            // This is a consonant that isn't 'n'
            char next_ch = getchar();  // Get the next character
            if (next_ch == '\n') {
                // End of word, and the current consonant is not 'n' (invalid)
                printf("NO\n");
                return 0;
            }
            // Check if the next character is a vowel
            if (next_ch != 'a' && next_ch != 'e' && next_ch != 'i' && next_ch != 'o' && next_ch != 'u') {
                // If the next character is not a vowel, it's invalid
                printf("NO\n");
                return 0;
            }
        }
    }
    // If we reached here, the word follows all rules
    printf("YES\n");
    return 0;
}