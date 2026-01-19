#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reminder.h"

// Declare the global Month variable
Month November;

int main() {
    // Initialize the Month struct with no reminders initially
    for (int i = 0; i < 30; i++) {
        November.reminders[i] = NULL;
    }

    int day;
    char reminder[256];

    while (1) {
        // Display the calendar
        displayCalendar(November);

        // Get the day and reminder input from the user
        printf("Enter day and reminder (0 to quit): ");
        scanf("%d", &day);

        // If the user enters 0, quit the loop
        if (day == 0) {
            break;
        }

        // Get the reminder for the specified day
        getchar();  // Clear the newline character from the input buffer
        printf("Enter reminder for day %d: ", day);
        fgets(reminder, 256, stdin);
        reminder[strcspn(reminder, "\n")] = '\0';  // Remove the newline character from input

        // Insert the reminder into the specified day
        insertReminder(&November, day, reminder);
    }

    return 0;
}
