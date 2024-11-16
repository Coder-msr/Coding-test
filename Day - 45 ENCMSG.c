#include <stdio.h>
#include <string.h>

void encodeMessage(int N, char S[]) {
    // Step 1: Swap adjacent characters
    for (int i = 0; i < N - 1; i += 2) {
        char temp = S[i];
        S[i] = S[i + 1];
        S[i + 1] = temp;
    }

    // Step 2: Replace letters with their "mirrored" counterparts
    for (int i = 0; i < N; i++) {
        S[i] = 'z' - (S[i] - 'a');
    }

    // Output the encoded message
    printf("%s\n", S);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        char S[101];  // Maximum string length is 100, plus one for null terminator

        scanf("%d", &N);
        scanf("%s", S);

        encodeMessage(N, S);
    }

    return 0;
}