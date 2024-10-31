#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int P, Q;
        scanf("%d %d", &P, &Q);

        // Total points scored so far
        int totalPoints = P + Q;

        // Determine whose serve it is
        if ((totalPoints / 2) % 2 == 0) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }

    return 0;
}