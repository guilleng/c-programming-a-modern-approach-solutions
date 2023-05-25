# Chapter 22 - Exercise 02

Indicate which mode string is most likely to be passed to `fopen` in each of the following situations:

(a) A database management system opens a file containing records to be updated.  

(b) A mail program opens a file of saved messages so that it can add additional messages to the end.  

(c) A graphics program opens a file containing a picture to be displayed on the screen.  

(d) An operating system command interpreter opens a “shell script” (or “batch file”) containing commands to be executed.  

---

(a) The mode string most likely to be passed to `fopen` in this situation depends on whether the database records are in binary or text format. For binary format, the mode string would be `"r+b"` or `"rb+"`, while for text format, it would be `"r+"`.

(b) In this case, the mail program would open the file for reading and writing (appending), so the mode string would be `"a+"`.

(c) Since the graphics program needs to read the file containing the picture, which is in binary format, the mode string would be `"rb"`.

(d) For the operating system command interpreter to open a shell script or batch file containing commands to be executed, the file only needs to be read, so the mode string would be `"r"`.
