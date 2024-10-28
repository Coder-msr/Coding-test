#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Number of test cases

    while (T--) {
        int N, K, count = 0;
        scanf("%d %d", &N, &K); // Read N and K

        int characteristic_value;
        for (int i = 0; i < N; i++) {
            scanf("%d", &characteristic_value);
            // Check if (characteristic_value + K) is divisible by 7
            if ((characteristic_value + K) % 7 == 0) {
                count++;
            }
        }
        printf("%d\n", count); // Output the count for each test case
    }

    return 0;
}