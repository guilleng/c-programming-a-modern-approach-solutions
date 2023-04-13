/*
 * C programming: A Modern Approach. Chapter 13, Project 02-c
 * Date: April 2023
 * Description: Prints a one-month reminder list.  
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_REMIND 50       /* maximum number of reminders */
#define MSG_LEN 60          /* max length of reminder message */

int read_line(char str[], int n);
void discard_input(char *msg);

int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN+3];
    char day_str[12], msg_str[MSG_LEN+1];
    int day, month, i, j, num_remind = 0, hh, mm;

    for (; ;)
    {
        if (num_remind == MAX_REMIND)
        {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day and month in format mm/dd, "
               "24-time in format hh:mm and reminder: ");

        scanf(" %d/ %d", &month, &day);
        if (day < 0 || day > 31 || month < 0 || month > 12)
        {
            discard_input("Invalid date");
            continue;
        }
        else if (month == 0 || day == 0)
        {
            break;
        }

        scanf(" %d: %d", &hh, &mm);
        if (hh < 0 || hh > 23 || mm < 0 || mm > 59)
        {
            discard_input("Invalid time");
            continue;
        }
        sprintf(day_str, "%2d/%2d %.2d:%.2d", day, month, hh, mm);
        read_line(msg_str, MSG_LEN);

        for (i = 0; i < num_remind; i++)
        {
            if (strcmp(day_str, reminders[i]) < 0)
            {
                break;
            }
        }
        for (j = num_remind; j > i; j--)
        {
            strcpy(reminders[j], reminders[j-1]);
        }

        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++)
    {
        printf(" %s\n", reminders[i]);
    }

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
    {
        if (i < n)
        {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}

void discard_input(char *msg)
{
    char c;
    while((c = getchar()) != '\n')
            /* discard */ ;
    puts(msg);
}
