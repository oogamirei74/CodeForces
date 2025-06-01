#include <stdio.h>
#include <string.h>
 
#define ALPHABET_SIZE 26
 
int main() {
    char guest[101], host[101], pile[201];
 
    // Read the input strings
    scanf("%s", guest);
    scanf("%s", host);
    scanf("%s", pile);
 
    // Create arrays to count the occurrences of each letter (A-Z)
    int combined_count[ALPHABET_SIZE] = {0}; // For combined guest + host names
    int pile_count[ALPHABET_SIZE] = {0};     // For the pile of letters
 
    // Count frequencies of characters in guest + host names
    for (int i = 0; guest[i] != '\0'; i++) {
        combined_count[guest[i] - 'A']++;  // Increment the count for guest characters
    }
    for (int i = 0; host[i] != '\0'; i++) {
        combined_count[host[i] - 'A']++;  // Increment the count for host characters
    }
 
    // Count frequencies of characters in the pile
    for (int i = 0; pile[i] != '\0'; i++) {
        pile_count[pile[i] - 'A']++;  // Increment the count for pile characters
    }
 
    // Compare the frequency counts of combined names and the pile
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (combined_count[i] != pile_count[i]) {
            // If any count does not match, the answer is "NO"
            printf("NO\n");
            return 0;
        }
    }
 
    // If all counts match, the answer is "YES"
    printf("YES\n");
    return 0;
}