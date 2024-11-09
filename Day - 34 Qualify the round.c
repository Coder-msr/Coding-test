#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int X, A, B;
        scanf("%d %d %d", &X, &A, &B);  // Read X, A, and B for each test case

        int total_score = A * 1 + B * 2;  // Calculate Chef's total score

        // Check if Chef qualifies for the next round
        if (total_score >= X) {
            printf("Qualify\n");
        } else {
            printf("NotQualify\n");
        }
    }

    return 0;
}