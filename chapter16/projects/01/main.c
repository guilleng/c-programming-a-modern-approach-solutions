/*
 * C programming: A Modern Approach. Chapter 16, Project 01
 * Date: April 2023
 * Description: Given an international dialing code displays which country it
 *              belongs to.
 */

#include <stdlib.h>
#include <stdio.h>

#include "user_input.h"
#include "dialing_codes.h"

#define BUF_LEN CODEDIGITS

int main(void)
{
    char buffer[BUF_LEN+1];
    int code;

    printf("Enter an international dialing code: ");
    read_stdin(buffer, BUF_LEN);

    code = valid_country_code(buffer);

    puts(country_name(code));

    exit(EXIT_SUCCESS);
}
