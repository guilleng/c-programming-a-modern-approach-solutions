/*
 * C programming: A Modern Approach. Chapter 22, Project 12
 * Date: May 2023
 * Description: Formats data that reads from a file
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char line_buffer[512];

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s data_file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }
        
    printf("Item\t\t\t\tUnit\t\t\t\tPurchase\n");
    printf("\t\t\t\tPrice\t\t\t\tDate\n");
    while (fgets(line_buffer, 80, fp) != NULL)
    {
        int item, purchase_mm, purchase_dd, purchase_yyyy;
        float price;
        if (ferror(fp))
        {
            perror("Error");
            break;
        }
        if (sscanf(line_buffer, "%d,%f,%d/%d/%d", 
                &item, &price, &purchase_mm, &purchase_dd, &purchase_yyyy) != 5)
        {
            fprintf(stderr, "sscanf() call failed for input %s\n", line_buffer);
            break;
        }

        printf("%d\t\t\t\t$%7.2f\t\t\t%d/%d/%d\n", 
                item, price, purchase_mm, purchase_dd, purchase_yyyy);
    }

    if (fclose(fp) == EOF)
    {
        perror("Error");
    }

    exit(EXIT_SUCCESS);
}
