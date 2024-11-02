#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Number of test cases

    while (T--) {
        int N;
        scanf("%d", &N);  // Number of players Chef is considering

        // Calculate the number of ways to choose captain and vice-captain
        int choices = N * (N - 1);
        printf("%d\n", choices);
    }

    return 0;
}