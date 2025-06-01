#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
 
    int remaining[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &remaining[i]);
    }
 
    int min_index = remaining[0];
    int max_index = remaining[0];
 
    for (int i = 1; i < n; i++) {
        if (remaining[i] < min_index) {
            min_index = remaining[i];
        }
        if (remaining[i] > max_index) {
            max_index = remaining[i];
        }
    }
 
    int possible_stolen = max_index - min_index + 1;
    int actual_stolen = possible_stolen - n;
 
    printf("%d\n", actual_stolen);
 
    return 0;
}