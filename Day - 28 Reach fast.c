#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Number of test cases

    while (T--) {
        int A, B, K;
        scanf("%d %d %d", &A, &B, &K);  // Read values of A, B, and K

        int distance = (A > B) ? A - B : B - A;  // Calculate the absolute distance
        int steps = (distance + K - 1) / K;      // Calculate minimum steps required

        printf("%d\n", steps);  // Print the result for each test case
    }

    return 0;
}