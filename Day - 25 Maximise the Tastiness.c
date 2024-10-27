#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int a, b, c, d;
        // Read the tastiness values for ingredients A, B, C, D
        scanf("%d %d %d %d", &a, &b, &c, &d);
        
        // Calculate all possible tastiness sums
        int tastiness1 = a + c; // A + C
        int tastiness2 = a + d; // A + D
        int tastiness3 = b + c; // B + C
        int tastiness4 = b + d; // B + D

        // Find the maximum tastiness
        int max_tastiness = tastiness1; // Start with the first sum
        if (tastiness2 > max_tastiness) max_tastiness = tastiness2;
        if (tastiness3 > max_tastiness) max_tastiness = tastiness3;
        if (tastiness4 > max_tastiness) max_tastiness = tastiness4;

        // Print the result for this test case
        printf("%d\n", max_tastiness);
    }

    return 0;
}
