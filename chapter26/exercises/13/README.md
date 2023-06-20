# Chapter 26 - Exercise 13

Section 26.3 described some of the ISO 8601 date and time formats. Here are a few more:

(a) Year followed by day of year: _YYYY–DDD_, where _DDD_ is a number between 001 and 366  

(b) Year, week, and day of week: _YYYY–Www–D_, where _ww_ is a number between 01 and 53, and _D_ is a digit between 1 through 7, beginning with Monday and ending with Sunday  

(c) Combined date and time: _YYYY–MM–DDThh:mm:ss_

Give `strftime` strings that correspond to each of these formats.

---

(a) `%Y-%j`  

(b) `%Y-W%V-%u`  

(c) `%FT%X`  
