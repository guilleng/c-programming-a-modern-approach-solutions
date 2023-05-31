/*
 * C programming: A Modern Approach. Chapter 22, Project 13
 * Date: January 2023
 * Description: Displays possible flight time based on file read times. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <errno.h>

#define BUF_SIZE 512
#define DATAFILE "flights.dat"

typedef struct {
    int departure;
    int arrival;
} Flight;

FILE *fp;
Flight *flights;
size_t flights_size = 0;

/*
 * Returns the number of lines in DATAFILE
 */
size_t count_entries(FILE *fp);
/*
 * Loads the departures and arrival times into the dynamically allocated 
 * `flights` array
 */
void load_database(FILE *fp);
/*
 * Closes DATAFILE file and frees the `flights` array
 */
void cleanup(void);

int main(void)
{
    char buffer[BUF_SIZE];
    int hh, mm, user_time;
    size_t i;
    
    if ((fp = fopen(DATAFILE, "r")) == NULL)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }

    flights_size = count_entries(fp);
    if (flights_size == 0)
    {
        fprintf(stderr, DATAFILE" is empty\n");
        exit(EXIT_FAILURE);
    }

    flights = malloc(sizeof(Flight) * flights_size);
    if (flights == NULL)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }

    load_database(fp);

    printf("Enter a time HH:MM (24-hour clock): ");
    if (fgets(buffer, BUF_SIZE, stdin) == NULL)
    {
        perror("Error");
        cleanup();
    }
    if (strlen(buffer) != 6 || buffer[2] != ':' ||
		!isdigit(buffer[0]) || !isdigit(buffer[1]) ||
		!isdigit(buffer[3]) || !isdigit(buffer[4]))
    {
        fprintf(stderr, "Invalid time input: %s\n", buffer);
        cleanup();
    }

    if (sscanf(buffer, "%d:%d", &hh, &mm) == 2)
    {
        if (mm < 0 || mm > 59 || hh < 0 || hh > 23)
        {
            fprintf(stderr, "Invalid time input: %s\n", buffer);
            cleanup();
        }

        user_time = hh * 60 + mm;
        for (i = 0; i < flights_size - 1; i++)
        {
            if ((abs(user_time - flights[i].departure)) <=
                 (abs(user_time - flights[i+1].departure)))
            {
                break;
            }
        }
    }
    else
    {
        cleanup();
        exit(EXIT_FAILURE);
    }

    printf("Closest departure time: %.2d:%.2d, arriving at %.2d:%.2d\n", 
                 flights[i].departure / 60, flights[i].departure % 60,
                 flights[i].arrival / 60, flights[i].arrival % 60);
    cleanup();
    exit(EXIT_SUCCESS);
}


size_t count_entries(FILE *fp)
{
    int i, file_entries = 0;

    while ((i = fgetc(fp)) != EOF)
    {
        if (i == '\n')
        {
            file_entries++;
        }
    }
    if (ferror (fp))
    {
        perror("Error");
        cleanup();
    }
    rewind(fp);

    return file_entries;
}

void load_database(FILE *fp)
{
    size_t i = 0;
    char buffer[BUF_SIZE];

    while (fgets(buffer, BUF_SIZE, fp) != NULL)
    {
        int hh1, mm1, hh2, mm2;
        Flight f;
        
        if (sscanf(buffer, "%d:%d %d:%d", &hh1, &mm1, &hh2, &mm2) != 4)
        {
           fprintf(stderr, "Error retrieving data from flights.dat:\n"
                           "line number: %ld\nline: %s", i, buffer);
           cleanup();
           break;
        }
        f.departure = hh1 * 60 + mm1;
        f.arrival = hh2 * 60 + mm2;
        if (f.departure < 0 || f.departure > 1439 ||
                f.arrival < 0 || f.arrival > 1439)
        {
            fprintf(stderr, "Invalid data from flights.dat:\n"
                            "line number: %ld\nline: %s", i, buffer);
            cleanup();
        }
        flights[i++] = f;
    }
    if (ferror (fp))
    {
        perror("Error");
        cleanup();
    }
    return;
}

void cleanup(void)
{
    if ((fclose(fp)) == EOF)
    {
        perror("Error");
    }
    free(flights);
    exit(EXIT_FAILURE);
}
