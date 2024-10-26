#include <stdio.h>

int countTuesdays(int N) {
    // Starting from Monday (day 1), calculate number of Tuesdays in the next N days
    int tuesdays = N / 7;
    if (N % 7 >= 2) { // Check if there is an extra Tuesday within the remaining days
        tuesdays++;
    }
    return tuesdays;
}

int main() {
    int T, N;
    
    // Read number of test cases
    scanf("%d", &T);
    
    while (T--) {
        // Read number of spooky days for each test case
        scanf("%d", &N);
        
        // Calculate and print the result
        printf("%d\n", countTuesdays(N));
    }
    
    return 0;
}