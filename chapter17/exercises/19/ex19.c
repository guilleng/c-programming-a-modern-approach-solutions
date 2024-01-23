/*
 * C programming: A Modern Approach. Chapter 17, exercise 19
 * Date: May 2023
 * Description: Searching for a command in an array of structures for calling 
 * 				some paired function.
 */

#include <stdio.h>
#include <string.h>

#define COMMANDS    (sizeof(file_cmd) / sizeof(*file_cmd))

void new_cmd(void);
void open_cmd(void);
void close_cmd(void);
void close_all_cmd(void);
void save_cmd(void);
void save_as_cmd(void);
void save_all_cmd(void);
void print_cmd(void);
void exit_cmd(void);

struct {
    char *cmd_name;
    void (*cmd_pointer)(void);
} file_cmd[] =
{ {"new",        new_cmd},
  {"open",       open_cmd},
  {"close",      close_cmd},
  {"close all",  close_all_cmd},
  {"save",       save_cmd},
  {"save as",    save_as_cmd},
  {"save all",   save_all_cmd},
  {"print",      print_cmd},
  {"exit",       exit_cmd}
};


/* via array indexing */
void run_cmd(char *command)
{
    size_t i;

    for (i = 0; i < COMMANDS; i++)
    {
        if (strcmp(file_cmd[i].cmd_name, command) == 0)
        {
            file_cmd[i].cmd_pointer();
            return;
        }
    }
}

/* via pointer arithmetic */
void run_cmd_ptr(char *command)
{
    size_t i;

    i = 0;
    while (file_cmd < file_cmd + COMMANDS)
    {
        if (strcmp((file_cmd + i)->cmd_name, command) == 0)
        {
            file_cmd->cmd_pointer();
            return;
        }
        i++;
    }
}

int main(void)
{
    run_cmd("new");
    run_cmd("exit");
    run_cmd("close");
    run_cmd("invalid command");

    run_cmd_ptr("new");
    run_cmd_ptr("exit");
    run_cmd_ptr("close");
    run_cmd_ptr("invalid command");

    return 0;
}

void new_cmd(void)
{
    printf("new_cmd\n");
}

void open_cmd(void)
{
    printf("open_cmd\n");
}

void close_cmd(void)
{
    printf("close_cmd\n");
}

void close_all_cmd(void)
{
    printf("close_all_cmd\n");
}

void save_cmd(void)
{
    printf("save_cmd\n");
}

void save_as_cmd(void)
{
    printf("save_as_cmd\n");
}

void save_all_cmd(void)
{
    printf("save_all_cmd\n");
}

void print_cmd(void)
{
    printf("print_cmd\n");
}

void exit_cmd(void)
{
    printf("exit_cmd\n");
}
