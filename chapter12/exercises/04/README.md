# Chapter 12 - Exercise 04

Rewrite the `make_empty`, `is_empty` and `is_full` functions of section 10.2 to use the pointer variable `top_ptr` instead of the integer variable `top`.

---

```
void make_empty(void)
{
    *top = &contents[0];
}

bool is_empty(void)
{
    return top == &contents[0];
}

bool is_full(void)
{
    return top == &contents[STACK_SIZE];
}
```

See also `ex04.c`.
