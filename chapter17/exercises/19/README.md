# Chapter 17 - Exercise 19

Write a function that, when given a string as its argument, searches the
following array of structures for a matching command name, then calls the
function associated with that name.

```C
struct {
    char *cmd_name;
    void (*cmd_pointer)(void);
} file_cmd[] =
 {{"new",       new_cmd},
 {"open",       open_cmd},
 {"close",      close_cmd},
 {"close all",  close_all_cmd},
 {"save",       save_cmd},
 {"save as",    save_as_cmd},
 {"save all",   save_all_cmd},
 {"print",      print_cmd},
 {"exit",       exit_cmd}
};
```


---

See `ex19.c`
