# Chapter 18 - Exercise 03

List the storage duration (static or automatic), scope (block or file), and
linkage (internal, external, or none) of each variable and parameter in the
following file:

```C
extern float a;
void f(register double b)
{
    static int c;
    auto char d;
}
```


---

| Name reference | Storage Duration | Scope  | Linkage  |
|----------------|------------------|--------|----------|
|        a       | Static           | File   | External |
|        b       | Automatic        | Block  | None     |
|        c       | Automatic        | Block  | None     |
|        d       | Automatic        | Block  | None     |
