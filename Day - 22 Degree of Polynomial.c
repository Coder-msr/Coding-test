#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N;  // Number of terms in the polynomial
        scanf("%d", &N);

        int degree = -1;  // To store the degree of the polynomial
        for (int i = 0; i < N; i++) {
            int coefficient;
            scanf("%d", &coefficient);

            if (coefficient != 0) {
                degree = i;  // Update degree if coefficient is non-zero
            }
        }

        printf("%d\n", degree);  // Print the degree of the polynomial
    }

    return 0;
}