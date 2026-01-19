# Reminder Management System (C)

A modular, multi-file C program that helps users manage daily reminders through an interactive command-line interface. The system supports adding reminders to specific dates, rendering a monthly calendar that clearly marks days containing reminders, and listing all active reminders.

## Features
- **Interactive CLI workflow**
  - Add reminders for a specific date
  - View the month calendar at any time
  - List all currently stored reminders

- **Calendar display with reminder indicators**
  - Prints a formatted monthly calendar
  - Visually marks dates that have at least one reminder using `(dd)` format

- **Dynamic calendar rendering**
  - Supports different calendar layouts depending on the month’s starting weekday (Friday/Saturday)

- **Structured reminder storage**
  - Uses a `Month` struct to store and manage reminder data
  - Maintains reminders via a global `Month` variable for consistent access across modules

- **Input validation**
  - Ensures dates are within valid November ranges
  - Validates user choices and handles invalid input safely

## Project Structure
- `main.c`
  - Program entry point and main menu / command-line interaction logic
- `reminder.c`
  - Core implementation for reminder storage, insertion, listing, and calendar rendering
- `reminder.h`
  - Function prototypes, struct definitions, and shared constants/types

## How It Works (High Level)
1. The program maintains a global `Month` struct containing reminder entries.
2. Users insert reminders by entering a date and reminder text.
3. The calendar renderer prints November and wraps any day containing reminders as `(dd)`.
4. Users can list all reminders to review what has been stored so far.

## Build and Run
Compile all source files together:

```bash
gcc -Wall -Wextra -std=c11 main.c reminder.c -o november_reminders
