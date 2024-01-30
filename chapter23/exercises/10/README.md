# Chapter 23 - Exercise 10

Replace the test condition in the following `if` statement by a single call of
`strstr`:

```C
if (strcmp(str, "foo") == 0 || strcmp(str, "bar") == 0 || strcmp(str, "baz") == 0) ...
```

_Hint_: Combine the string literals into a single string, separating them with a
special character.  Does your solution assume anything about the contents of
`str`?


---

```C
if (strstr("foo\x01""bar\x01""baz", str)
{
    ...
}
```

This solution assumes that the `SOC` (start of heading) character is not present
in the domain of the string being searched.  Using a non-printable character as
a delimiter can help ensure that the character does not naturally occur in the
string being searched.

Note that strings like `"o\x01ba"` or `"ar\x01"` will result in a true value for
the conditional.
