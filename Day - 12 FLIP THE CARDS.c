#include <stdio.h>

int min_flips(int N, int X) {
    
    return (X < (N - X)) ? X : (N - X);
}

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);  
        printf("%d\n", min_flips(N, X));
    }

    return 0;
}
