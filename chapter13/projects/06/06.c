/* Checks planet names */

#include <stdio.h>
#include <ctype.h>

#define NUM_PLANETS 9

int strcmp_ignorecase(char *s, char *t);

int main(int argc, char *argv[])
{
    char *planets[] = { "Mercury", "Venus", "Earth", 
                        "Mars", "Jupiter", "Saturn", 
                        "Uranus", "Neptune", "Pluto" }; 

    int i, j;

    for (i = 1; i < argc; i++)
    {
        for (j = 0; j < NUM_PLANETS; j++)
        {
            if (strcmp_ignorecase(argv[i], planets[j]) == 0)
            {
                printf("%s is planet %d\n", planets[j], j + 1);
                break;
            }
        }
        if (j == NUM_PLANETS)
        {
            printf("%s is not a planet\n", argv[i]);
        }
    }

    return 0;
}

/*
 * Behaves as `strcmp`. Transforms each character of `s` and `t` to uppercase 
 * before testing for equality.
 */
int strcmp_ignorecase(char *s, char *t)
{
    while (toupper(*s) == toupper(*t))
    {
        if (!*s)
        {
            return 0;
        }
        s++, t++;
    }
    return toupper(*s) - toupper(*t);
}
