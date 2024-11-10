#include <stdio.h>

// Function to calculate minimum time for a single test case
int minimum_time(int n, int x, int health[]) {
    int single_target_time = 0;
    int multi_target_time = 0;

    // Calculate time in single-target mode
    for (int i = 0; i < n; i++) {
        single_target_time += (health[i] + x - 1) / x; // ceil(health[i] / x)
    }

    // Find the maximum health for multi-target mode
    int max_health = 0;
    for (int i = 0; i < n; i++) {
        if (health[i] > max_health) {
            max_health = health[i];
        }
    }
    multi_target_time = max_health;

    // Return the minimum of the two times
    return (single_target_time < multi_target_time) ? single_target_time : multi_target_time;
}

int main() {
    int t;
    scanf("%d", &t); // Number of test cases

    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x); // Number of enemies and damage in single-target mode

        int health[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &health[i]); // Health points of enemies
        }

        // Compute and print the minimum time
        printf("%d\n", minimum_time(n, x, health));
    }

    return 0;
}