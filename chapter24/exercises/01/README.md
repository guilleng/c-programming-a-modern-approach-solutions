# Chapter 24 - Exercise 01

(a) Assertions can be used to test for two kinds of problems: (1) problems that should never occur if the program is correct, and (2) problems that are beyond the control of the program.  Explain why `assert` is best suited for problems in the first category.  

(b) Give three examples of problems that are beyond the control of the program.  

---

(a)
Assertions are used to check for conditions that should never occur if the program is functioning correctly. When an assertion fails, it indicates that an assumption made by the programmer about the program's state or behavior is false. It is a strong indication of a bug or an error in the code.   
Because a failed `assert` halts program execution immediately it is best suited as a valid way to abort a program that has a problem beyond its control.  

(b) 
Failure to allocate memory:  
Sometimes, when requesting memory dynamically using functions like `malloc` or `calloc`, the system may fail to provide the requested memory block. This is beyond the control of the program because it depends on the system's resources and current state.  

System signals:  
A program can receive signals from the operating systems or the user. These signals can be beyond the control of the program as they are external events triggered by the operating system or user actions. The program needs to handle these signals appropriately to ensure graceful termination or perform necessary cleanup actions.  

Hardware failure:   
Malfunctions or errors such as faulty components, overheating, or power outages.   
