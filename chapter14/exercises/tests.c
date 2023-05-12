/*
 * C programming: A Modern Approach. Chapter 14.
 * Date: April 2023
 * Description: Code and tests related to chapter exercises.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercise 1 */
#define CUBE(x)                 ((x)*(x)*(x))
#define REMAINDER_FOUR(n)       ((n) % 4)
#define PRODUCT_GT_100(x,y)     (((x)*(y)) > 100)

/* Exercise 2 */
/* Assumes `a` is in the same scope as the macro */
#define NELEMS(a)               (sizeof(a) / sizeof(*a))

/* Exercise 3 */
#define BAD_DOUBLE(x)           2*x
#define DOUBLE(x)               (2 * (x))

/* Exercise 4 */
#define BAD_AVG(x,y)            (x-y)/2
#define AVG(x,y)                (((x) + (y)) / 2.0)

#define BAD_AREA(x,y)           (x) * (y)
#define AREA(x,y)               ((x) * (y))

/* Exercise 5 */
#define TOUPPER(c)              ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

/* Exercise 6 */
#define DISP(f,x)               printf(#f"(%g) = %g\n", (x), (f(x)))           \
                                
#define DISP2(f,x,y)            printf(#f"(%g, %g) = %g\n",                    \
                                               (x), (y), (f((x),(y))))        

double dummy(double a, double b)
{
    return a + b;
}

/* Exercise 7 */
#define GENERIC_MAX(type)                                       \
                                type type##_max(type x, type y) \
                                {                               \
                                    return x > y ? x : y;       \
                                }

typedef unsigned long ulong_nospaces;

GENERIC_MAX(long)
GENERIC_MAX(ulong_nospaces)

/* Exercise 8 */
#define STRINGIFY(x)            #x
#define TOSTRING(x)             STRINGIFY(x)
#define LINE_FILE               "Line "TOSTRING(__LINE__)" of file "__FILE__

/* Exercise 9 */
#define CHECK(x,y,n)         (((x) >= 0) && ((y) >= 0) &&                      \
                             ((x) <= ((n) - 1)) && ((y) <= ((n) - 1)))

#define MEDIAN(x,y,z)        (((x) > (y)) ?                                    \
                             (((y) > (z)) ? (y) : (((x) > (z)) ? (z) : (x)))   \
                            :(((x) > (z)) ? (x) : (((y) > (z)) ? (z) : (y))))

#define POLYNOMIAL(x)                                                          \
        (-6 + (x) * (7 + (x) * (-1 + (x) * (-5 + (x) *(2 + 3 * (x))))))

/* Exercise 10 */
#ifdef __STDC_VERSION__
#if __STDC_VERSION__ >= 199901L

#define ERROR(str, ...)     fprintf(stderr, (str), __VA_ARGS__)

#endif
#endif

/* Exercise 15 */

/*#define ENGLISH */
/*#define FRENCH */
#define SPANISH

#ifdef ENGLISH
#define INSERT_DISK         "Insert Disk 1"
#endif

#ifdef FRENCH
#define INSERT_DISK         "Inserez Le Disque 1"
#endif

#ifdef SPANISH
#define INSERT_DISK         "Inserte El Disco 1"
#endif

/*
 * Takes a macro to be tested, a parameter to pass to it, and the expected 
 * result. Prints TRUE if the macro produces the expected result, and FALSE 
 * otherwise.
 */
#define TEST(macro, parameter, expected)                                       \
    do {                                                                       \
        printf("%-13s ",                                                       \
                ((macro(parameter) == expected) ? "TRUE" : "FALSE"));          \
        printf(#macro"("#parameter") = "#expected"\n");                        \
    } while (0)

/*
 * Takes a macro to be tested, two parameters to pass to it, and the expected 
 * result. Prints TRUE if the macro produces the expected result, and FALSE 
 * otherwise.
 */
#define TEST2(macro, param1, param2, expected)                                 \
    do {                                                                       \
        printf("%-13s ",                                                       \
              ((macro(param1, param2) == expected) ? "TRUE" : "FALSE"));       \
        printf(#macro"("#param1", "#param2") = "#expected"\n");                \
    } while (0)

/*
 * Takes a macro to be tested, three parameters to pass to it, and the expected 
 * result. Prints TRUE if the macro produces the expected result, and FALSE 
 * otherwise.
 */
#define TEST3(macro, param1, param2, param3, expected)                         \
    do {                                                                       \
        printf("%-13s ",                                                       \
              (macro(param1, param2, param3) == expected) ? "TRUE" : "FALSE"); \
        printf(#macro"("#param1", "#param2", "#param3") = "#expected"\n");     \
    } while (0)

/* 
 * Output formatting macros
 */
#define EXERCISE(n) puts("\tExercise "#n":\n")
#define SEPARATOR(c) puts("\n\t"#c#c#c#c#c#c#c#c#c#c#c"\n")

int main (void)
{
    EXERCISE(1);
    TEST(CUBE, 0, 0);
    TEST(CUBE, 1, 1);
    TEST(CUBE, -1, -1);
    puts("");

    TEST(REMAINDER_FOUR, 2, 2);
    TEST(REMAINDER_FOUR, 8, 0);
    TEST(REMAINDER_FOUR, 9, 1);
    TEST(REMAINDER_FOUR, -2, -2);
    puts("");

    TEST2(PRODUCT_GT_100, 1, 1, 0);
    TEST2(PRODUCT_GT_100, 5, 25, 1);
    TEST2(PRODUCT_GT_100, 10, 10, 0);
    TEST2(PRODUCT_GT_100, -5, 25, 0);
    SEPARATOR(#);

    {
        EXERCISE(2);
        char a[5+1] = "qwerty";
        char b[1+1] = "q";
        char c[1] = { '\0' };
        int  d[1024] = { 0 };
        TEST(NELEMS, a, 5+1);
        TEST(NELEMS, b, 1+1);
        TEST(NELEMS, c, 1);
        TEST(NELEMS, d, 1024);
        SEPARATOR(#);
    }

    EXERCISE(3);
    TEST(BAD_DOUBLE, 1+2, 4);
    printf("%-13s 4/BAD_DOUBLE(2) = 4 \n", 
            4/BAD_DOUBLE(2) == 4 ? "TRUE" : "FALSE");
    TEST(DOUBLE, 0, 0);
    TEST(DOUBLE, -1, -2);
    TEST(DOUBLE, 1, 2);
    SEPARATOR(#);

    EXERCISE(4);
    TEST2(BAD_AVG, 3+1, 4*2, -2);
    TEST2(AVG, 3+1, 4*2, 6);
    printf("%-13s 12/BAD_AREA(2, 3) = 18 \n", 
            12/BAD_AREA(2, 3) == 18 ? "TRUE" : "FALSE");
    printf("%-13s 12/AREA(2, 3) = 2 \n", 
            12/AREA(2, 3) == 2 ? "TRUE" : "FALSE");
    SEPARATOR(#);

    {
        char s[] = "abcd",
             t[] = "0123";
        int i = 0;
        EXERCISE(5);
        TEST(TOUPPER, s[++i], 'D');
        i = 0;
        TEST(TOUPPER, t[++i], '2');
        SEPARATOR(#);
    }

    EXERCISE(6);
    DISP(sqrt, 3.0);
    DISP2(dummy, 3.0, 2.0);
    DISP2(dummy, 3+1, 2.0);
    SEPARATOR(#);

    EXERCISE(8);
    puts(LINE_FILE);
    SEPARATOR(#);

    EXERCISE(9);
    TEST3(CHECK, 1, 2, 3, 1);
    TEST3(CHECK, 4, 8, 5, 0);
    TEST3(CHECK, -1, 1, 10, 0);
    puts("");
    TEST3(MEDIAN, -1, 10, 1, 1);
    TEST3(MEDIAN, -5, 0, 5, 0);
    TEST3(MEDIAN, 11, 21, 3, 11);
    puts("");
    TEST(POLYNOMIAL, 1, 0);
    TEST(POLYNOMIAL, (float) 1 / 2, -3.15625);
    TEST(POLYNOMIAL, 0, -6);
    TEST(POLYNOMIAL, (double) -0.5, -9.09375);
    TEST(POLYNOMIAL, -1.0, -10);
    TEST(POLYNOMIAL, -2.0f, -48);
    SEPARATOR(#);

#ifdef __STDC_VERSION__
#if __STDC_VERSION__ >= 199901L
    int index = 0,
        j = 420;
    double k = -69.42;

    EXERCISE(10);
    ERROR("Range error: index = %d\n", index);
    ERROR("i = %d j = %d k = %.3f\n", index, j, k);
    SEPARATOR(#);
#endif
#endif

    EXERCISE(15);
    puts(INSERT_DISK);
    SEPARATOR(#);

    exit(EXIT_SUCCESS);
}
