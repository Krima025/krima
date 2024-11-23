#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice;
    time_t start, end;
    double elapsed;

    printf("Simple Stopwatch in C\n");

    while (1) {
        printf("\nMenu:\n");
        printf("1. Start Stopwatch\n");
        printf("2. Stop Stopwatch\n");
        printf("3. Reset Stopwatch\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Start stopwatch
                start = time(NULL); // Get current time as start time
                printf("Stopwatch started...\n");
                break;
            case 2: // Stop stopwatch
                end = time(NULL); // Get current time as end time
                elapsed = difftime(end, start); // Calculate elapsed time
                printf("Stopwatch stopped.\n");
                printf("Elapsed time: %.2f seconds\n", elapsed);
                break;
            case 3: // Reset stopwatch
                printf("Stopwatch reset.\n");
                break;
            case 4: // Exit
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}
