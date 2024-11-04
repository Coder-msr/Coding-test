#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int max_lead = 0;
    int winner = 0;
    
    int player1_total = 0;
    int player2_total = 0;
    
    for (int i = 0; i < n; i++) {
        int s1, s2;
        scanf("%d %d", &s1, &s2);
        
        // Update cumulative scores
        player1_total += s1;
        player2_total += s2;
        
        // Calculate the current lead
        int lead = player1_total - player2_total;
        
        // Determine if player 1 or player 2 is leading
        if (lead > 0) {
            if (lead > max_lead) {
                max_lead = lead;
                winner = 1;
            }
        } else {
            if (-lead > max_lead) {
                max_lead = -lead;
                winner = 2;
            }
        }
    }
    
    printf("%d %d\n", winner, max_lead);
    
    return 0;
}