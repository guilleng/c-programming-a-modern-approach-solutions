/*
 * C programming: A Modern Approach. Chapter 22, Project 09
 * Date: May 2023
 * Description: Merges two binary inventory files into one
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define NAME_LEN   25

struct part {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
}; 


int main(int argc, char *argv[])
{
    FILE *fp1, *fp2, *fp_dest;
    char new_file[FILENAME_MAX];

    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s file1 file2\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    fp1 = fopen(argv[1], "rb");
    if (fp1 == NULL)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }

    fp2 = fopen(argv[2], "rb");
    if (fp2 == NULL)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }

    printf("Enter merged file name: ");
    fgets(new_file, FILENAME_MAX, stdin);
    new_file[strcspn(new_file, "\n")] = '\0';
    if (strlen(new_file) == 0)
    {
        strcpy(new_file, "merged-data.dat");
    }

    fp_dest = fopen(new_file, "wb");
    if (fp_dest == NULL)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }

    /* merge files */
    while (1)
    {
        struct part from_fp1;
        struct part from_fp2;
        size_t read_fp1, read_fp2, ret;

        read_fp1 = fread(&from_fp1, sizeof(struct part), 1, fp1);
        read_fp2 = fread(&from_fp2, sizeof(struct part), 1, fp2);
        
        if (ferror(fp1) || ferror(fp2))
        {
            perror("Error");
			break;
        }

        if (read_fp1 == 1 && read_fp2 == 1)
        {
            if (from_fp1.number == from_fp2.number)
            {
                if (strcmp(from_fp1.name, from_fp2.name) != 0)
                {
                    fprintf(stderr, "Error: part name mismatch, using name %s\n"
                            "File %s | Part number %d | Part name %s\n"
                            "File %s | Part number %d | Part name %s\n", 
                            from_fp1.name,
                            argv[1], from_fp1.number, from_fp1.name, 
                            argv[2], from_fp2.number, from_fp2.name);
                }
                from_fp1.on_hand += from_fp2.on_hand;
                ret = fwrite(&from_fp1, sizeof(struct part), 1, fp_dest);
            }
            else if (from_fp1.number < from_fp2.number)
            {
                ret = fwrite(&from_fp1, sizeof(struct part), 1, fp_dest);
                ret = fwrite(&from_fp2, sizeof(struct part), 1, fp_dest);
            }
            else
            {
                ret = fwrite(&from_fp2, sizeof(struct part), 1, fp_dest);
                ret = fwrite(&from_fp1, sizeof(struct part), 1, fp_dest);
            }

        }
        else if (read_fp1 == 1 && read_fp2 == 0)
        {
            ret = fwrite(&from_fp1, sizeof(struct part), 1, fp_dest);
        }
        else if (read_fp2 == 1 && read_fp1 == 0)
        {
            ret = fwrite(&from_fp2, sizeof(struct part), 1, fp_dest);
        }
        else if (read_fp1 == 0 && read_fp1 == 0)
        {
            break;
        }

        if (ret != 1 || ferror(fp_dest))
        {
            perror("Error");
            break;
        }
    }

    if (fclose(fp1) == EOF)
    {
        perror("Error");
    }

    if (fclose(fp2) == EOF)
    {
        perror("Error");
    }

    if (fclose(fp_dest) == EOF)
    {
        perror("Error");
    }


    exit(EXIT_SUCCESS);
}
