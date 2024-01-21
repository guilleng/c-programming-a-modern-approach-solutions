# Chapter 15 - Exercise 03

We saw that writing `#include <file>` instead of `#include "file"` may not work
if `file` is one that we've written.  Would there be any problem with writing
`#include "file"` instead of `#include <file>` if `file` is a system header?


---

Generally, no.  The distinction between using angle brackets (`< >`) and double
quotes (`" "`) affects the way the preprocessor searches for the included file.

When including system headers, using angle brackets is typically preferred.  It
clearly differentiates them from user-written headers and helps prevent filename
collisions.
