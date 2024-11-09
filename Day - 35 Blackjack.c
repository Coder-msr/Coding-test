#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);  // Read A and B for each test case

        int sum = A + B;
        int third_number = 21 - sum;  // Calculate the required third number

        // Check if the third number is in the valid range (1 to 10)
        if (third_number >= 1 && third_number <= 10) {
            printf("%d\n", third_number);
        } else {
            printf("-1\n");  // If not possible to reach exactly 21, print -1
        }
    }

    return 0;
}