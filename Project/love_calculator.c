#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    char name1[100], name2[100];
    int dob1_day, dob1_month, dob1_year;
    int dob2_day, dob2_month, dob2_year;
    int compatibility_name, compatibility_date;
    int compatibility_overall;

    // Seed the random number generator
    srand(time(NULL));

    // Input names for person 1 and person 2
    printf("Enter the name of person 1: ");
    scanf("%s", &name1);
    printf("Enter the name of person 2: ");
    scanf("%s", &name2);

    // Input date of birth for person 1
    printf("Enter the date of birth for person 1 (DD MM YYYY): ");
    scanf("%d %d %d", &dob1_day, &dob1_month, &dob1_year);

    // Input date of birth for person 2
    printf("Enter the date of birth for person 2 (DD MM YYYY): ");
    scanf("%d %d %d", &dob2_day, &dob2_month, &dob2_year);

    // Calculate name compatibility
    int len1 = strlen(name1);
    int len2 = strlen(name2);
    int common_characters = 0;

    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            if (name1[i] == name2[j])
            {
                common_characters++;
                break;
            }
        }
    }

    // Name compatibility score (percentage)
    compatibility_name = (common_characters * 100) / (len1 > len2 ? len1 : len2);

    // Calculate compatibility based on date of birth (random number between 0 and 100)
    compatibility_date = rand() % 101;

    // Overall compatibility (average of name compatibility and date compatibility)
    compatibility_overall = (compatibility_name + compatibility_date) / 2;

    // Output compatibility
    printf("\nName Compatibility: %d%%\n", compatibility_name);
    printf("Date Compatibility: %d%%\n", compatibility_date);
    printf("Overall Compatibility: %d%%\n", compatibility_overall);

    return 0;
}
