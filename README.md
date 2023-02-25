# c-programming-a-modern-approach-solutions

Solutions to exercises and programming projects in K. N. King's "C Programming a Modern Approach" Second Edition.  

---

## Purpose

The purpose of this repository is mainly to track and document personal progress while working through the book "C Programming a Modern Approach" by K. N. King. It is also used as an opportunity to get familiar with version control basic usage and may serve as a reference for other learners who are using the same study material. 
The author welcomes feedback and suggestions for improvements, including best practices using GitHub, corrections for code, solutions, spelling, and grammar errors.  

## Setup
 
Source code is compiled and tested with:   
```
gcc --version
gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Copyright (C) 2019 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

The compiler is set to run, accordingly, the C89 or C99 standard:  
```
gcc file_name.c -o file_name.o -Wextra -Wall -Wpedantic -std=c89
gcc file_name.c -o file_name.o -Wextra -Wall -Wpedantic -std=c99
```

## Layout

The repository is organized into chapters, each with a separate folder.  
Within each chapter folder, there are two subdirectories: one for the `/exercises` and one for the programming `/projects`.   
Each book exercise has its own numbered folder within the `/exercises` subdirectory, containing a README file with a full transcription and its solution, as well as any source code needed to complete it.  
Each project has its own numbered folder within the projects subdirectory, containing a README file with a full transcription of the project prompt and all the necessary source code files for completing the project.  

## License

## Book copyright:  
```
/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/
```

## Repository license:  
<a rel="license" href="http://creativecommons.org/licenses/by/4.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by/4.0/88x31.png" /></a><br />This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by/4.0/">Creative Commons Attribution 4.0 International License</a>.
