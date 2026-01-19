#include "reminder.h"
#include <stdio.h>
#include <string.h>

// Function to insert a reminder for a specific day
void insertReminder(Month* month, int day, const char* reminder) {
    if (day < 1 || day > 30) {
        printf("Invalid day\n");
        return;
    }
    month->reminders[day - 1] = strdup(reminder); // Store a copy of the reminder string
}

// Function to display the calendar with marked reminders
void displayCalendar(Month month) {
    printf("Sun Mon Tue Wed Thu Fri Sat\n");

    // Days of the week: November starts on a Saturday (index 6)
    int startDay = 6; // The first day of November 2024 is a Saturday
    for (int i = 0; i < 30; i++) {
        // If it’s the start of a new week, move to the next line
        if ((i + startDay) % 7 == 0) {
            printf("\n");
        }
        
        // Check if there is a reminder for the day
        if (month.reminders[i] != NULL) {
            printf("(%2d)", i + 1);  // Display day with parentheses (for reminder)
        } else {
            printf("  %2d", i + 1);  // Display day without parentheses
        }

        // Adjust formatting for spacing between days
        if ((i + startDay) % 7 != 6) {
            printf(" ");
        }
    }
    printf("\n\n");

    // Display the reminders for each day
    printf("Reminders:\n");
    for (int i = 0; i < 30; i++) {
        if (month.reminders[i] != NULL) {
            printf("Day %d: %s\n", i + 1, month.reminders[i]);
        }
    }
    printf("\n");
}

