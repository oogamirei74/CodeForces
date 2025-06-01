#include <stdio.h>
 
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
 
    char answers[n][m];
    for (int i = 0; i < n; i++) {
        scanf("%s", answers[i]);
    }
 
    int points[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &points[i]);
    }
 
    int max_score = 0;
    for (int i = 0; i < m; i++) {
        int max_points = 0;
 
        for (int j = 0; j < 5; j++) {
            int answer_count = 0;
 
            for (int k = 0; k < n; k++) {
                if (answers[k][i] == 'A' + j) {
                    answer_count++;
                }
            }
 
            int current_score = answer_count * points[i];
            if (current_score > max_points) {
                max_points = current_score;
            }
        }
 
        max_score += max_points;
    }
 
    printf("%d\n", max_score);
 
    return 0;
}