#*********************************************************
# From C PROGRAMMING: A MODERN APPROACH, Second Edition *
# By K. N. King                                         *
# Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
# All rights reserved.                                  *
# This program may be freely distributed for class use, *
# provided that this copyright notice is retained.      *
#********************************************************/

justify: justify.o word.o line.o
	gcc -o justify justify.o word.o line.o

justify.o: justify.c word.h line.h
	gcc -c justify.c

word.o: word.c line.h
	gcc -c word.c

line.o: line.c line.h
	gcc -c line.c
