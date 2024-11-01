#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases

    while (T--) {
        int A, B, C, D;
        scanf("%d %d", &A, &B);  // Read initial scores
        scanf("%d %d", &C, &D);  // Read target scores

        // Check if it is possible to reach the target scores
        if (C >= A && D >= B) {
            printf("POSSIBLE\n");
        } else {
            printf("IMPOSSIBLE\n");
        }
    }

    return 0;
}