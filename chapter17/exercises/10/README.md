# Chapter 17 - Exercise 10

Modify the `print_part` function of Section 16.2 so that its parameter is a _pointer_ to a `part` structure. Use the `->` operator in your answer.  

---

The original function as defined in section 16.2:  

```
void print_part(struct part p)
{
    printf("Part number: %d\n", p.number);
    printf("Part name: %s\n", p.name);
    printf("Quantity on hand: %d\n", p.on_hand);
}
```

Modified version:  

```
void print_part(struct part *p)
{
    printf("Part number: %d\n", p->number);
    printf("Part name: %s\n", p->name);
    printf("Quantity on hand: %d\n", p->on_hand);
}
```
