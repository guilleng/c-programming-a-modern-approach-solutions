# Chapter 15 - Exercise 03

We saw that writing `#include <file>` instead of `#include "file"` may not work if `file` is one that we've written. Would there be any problem with writing `#include "file"` instead of `#include <file>` if `file` is a system header?

---

Generally, no. It only affects the way the preprocessor searches for the file to be included. Using angle brackets to include system headers may be preferred, as it clearly distinguishes them from user-written headers and may avoid collisions of header filenames.
