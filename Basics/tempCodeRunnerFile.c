#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to validate integer input within a specified range
int validateIntegerInput(const char *prompt, int min, int max)
{
    int input;
    printf("%s", prompt);
    int ret = scanf("%d", &input);
    while (ret != 1 || input < min || input > max)
    {
        if (ret == EOF)
        {
            printf("Error: End-of-file reached while reading input. Please try again.\n");
            // Clear input buffer
            while (getchar() != '\n')
                ;
            printf("%s", prompt);
        }
        else
        {
            printf("Invalid input. Please enter a number between %d and %d.\n", min, max);
            // Clear input buffer
            while (getchar() != '\n')
                ;
            printf("%s", prompt);
            ret = scanf("%d", &input);
        }
    }
    // Clear input buffer
    while (getchar() != '\n')
        ;
    return input;
}

// Function to validate date input in the format "YYYY-MM-DD"
int validateDateInput(const char *prompt, char *date)
{
    printf("%s", prompt);
    int ret = scanf("%s", date);
    while (ret != 1 || !isValidDate(date))
    {
        if (ret == EOF)
        {
            printf("Error: End-of-file reached while reading input. Please try again.\n");
            // Clear input buffer
            while (getchar() != '\n')
                ;
            printf("%s", prompt);
        }
        else
        {
            printf("Invalid date input. Please enter a date in the format YYYY-MM-DD.\n");
            // Clear input buffer
            while (getchar() != '\n')
                ;
            printf("%s", prompt);
            ret = scanf("%s", date);
        }
    }
    // Clear input buffer
    while (getchar() != '\n')
        ;
    return 1;
}

// Function to check if the date is in the format "YYYY-MM-DD"
int isValidDate(const char *date)
{
    // Basic check for the format YYYY-MM-DD
    if (strlen(date) != 10)
    {
        printf("Invalid date format. Please enter in the format YYYY-MM-DD.\n");
        return 0;
    }
    for (int i = 0; i < 10; i++)
    {
        if (i == 4 || i == 7)
        {
            if (date[i] != '-')
            {
                printf("Invalid date format. Please enter in the format YYYY-MM-DD.\n");
                return 0;
            }
        }
        else
        {
            if (!isdigit(date[i]))
            {
                printf("Invalid date format. Please enter in the format YYYY-MM-DD.\n");
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    // Example usage of the generic input validation functions
    int priority = validateIntegerInput("Enter priority (1: High, 2: Medium, 3: Low): ", 1, 3);
    char due_date[12];
    validateDateInput("Enter due date (YYYY-MM-DD): ", due_date);

    printf("Priority: %d, Due Date: %s\n", priority, due_date);

    return 0;
}
