#include <stdio.h>

int main() {
    // Create years variable
    int years = 1;

    // Print text asking for input
    puts("Enter your age in years:");

    // Accept input
    scanf("%d", &years);

    // Ouput conversion
    printf("\"%d\" years is \"%d\" minutes.\n", years, years * 365 * 24 * 60);

    return 0;
}