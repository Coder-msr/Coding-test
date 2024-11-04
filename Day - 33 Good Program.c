#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Number of bits taken by the program
        
        // Check if N is a multiple of 4
        if (N % 4 == 0) {
            printf("Good\n");
        } else {
            printf("Not Good\n");
        }
    }

    return 0;
}
