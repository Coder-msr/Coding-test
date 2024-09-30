#include <stdio.h>

int main() {
    int T, X, Y;
    
    
    scanf("%d", &T);
    
    
    for (int i = 0; i < T; i++) {
        
        scanf("%d %d", &X, &Y);
        
        
        int total_hours = 4 * X + Y;
        
        
        printf("%d\n", total_hours);
    }
    
    return 0;
}