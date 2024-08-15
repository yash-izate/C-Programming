#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100
#define MAX_TASK_LEN 50

struct Task
{
    char description[MAX_TASK_LEN];
    int completed;
};

struct Task tasks[MAX_TASKS];
int numTasks = 0;

int safeReadInt()
{
    char buffer[256];
    if (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        int value;
        if (sscanf(buffer, "%d", &value) == 1)
        {
            return value;
        }
    }
    printf("Invalid input\n");
    return -1; // or any other value indicating an error
}

void safeReadString(char *str, int maxSize)
{
    if (fgets(str, maxSize, stdin) != NULL)
    {
        // Remove trailing newline character
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n')
        {
            str[len - 1] = '\0';
        }
    }
    else
    {
        printf("Invalid input\n");
    }
}

void displayNumTasks()
{
    printf("Number of tasks remaining: %d\n", numTasks);
}

void addTask(const char *description)
{
    if (numTasks >= MAX_TASKS)
    {
        printf("Error: Too many tasks\n");
        return;
    }

    if (strlen(description) >= MAX_TASK_LEN)
    {
        printf("Error: Task description too long\n");
        return;
    }

    strcpy(tasks[numTasks].description, description);
    tasks[numTasks].completed = 0;
    numTasks++;
    printf("Task added successfully\n");
    displayNumTasks();
}

void viewTasks()
{
    if (numTasks == 0)
    {
        printf("No tasks\n");
        return;
    }

    printf("Tasks:\n");
    for (int i = 0; i < numTasks; i++)
    {
        printf("%d. [%c] %s\n", i + 1, tasks[i].completed ? 'X' : ' ', tasks[i].description);
    }
}

void markTaskComplete(int index)
{
    if (index < 1 || index > numTasks)
    {
        printf("Invalid task number\n");
        return;
    }
    tasks[index - 1].completed = 1;
    printf("Task marked as complete\n");
    displayNumTasks();
}

void deleteTask(int index)
{
    if (index < 1 || index > numTasks)
    {
        printf("Invalid task number\n");
        return;
    }

    for (int i = index - 1; i < numTasks - 1; i++)
    {
        strcpy(tasks[i].description, tasks[i + 1].description);
        tasks[i].completed = tasks[i + 1].completed;
    }

    tasks[numTasks - 1].description[0] = '\0';
    tasks[numTasks - 1].completed = 0;

    numTasks--;
    printf("Task deleted successfully\n");
    displayNumTasks();
}

int main()
{
    int choice, index;
    char description[MAX_TASK_LEN];

    do
    {
        printf("\n1. Add Task\n2. View Tasks\n3. Mark Task as Complete\n4. Delete  Task\n5. Exit\n");
        printf("Enter your choice: ");
        choice = safeReadInt();

        switch (choice)
        {
        case 1:
            printf("Enter task description (up to %d characters): ", MAX_TASK_LEN - 1);
            safeReadString(description, sizeof(description));
            addTask(description);
            break;
        case 2:
            viewTasks();
            break;
        case 3:
            printf("Enter task number to mark as complete: ");
            index = safeReadInt();
            if (index > 0)
            {
                markTaskComplete(index);
            }
            break;
        case 4:
            printf("Enter task number to delete: ");
            index = safeReadInt();
            if (index > 0)
            {
                deleteTask(index);
            }
            break;
        case 5:
            printf("Exiting program\n");
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 5);

    return 0;
}
