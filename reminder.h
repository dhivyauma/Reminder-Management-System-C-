#ifndef REMINDER_H
#define REMINDER_H

// Define the struct to represent the month of November
typedef struct {
    char* reminders[30];  // Array to store reminders for each day of the month
} Month;

// Function Prototypes
void insertReminder(Month* month, int day, const char* reminder);
void displayCalendar(Month month);

#endif
