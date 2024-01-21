# Chapter 15 - Project 02

Modify the `justify` program of Section 15.3 by having the `read_word` function
(instead of `main`) store the * character at the end of a word that's been
truncated.

---

# Input:

```
Pneumonoultramicroscopicsilicovolcanoconiosis (forty-five letters):
A lung disease caused by the inhalation of silica or quartz dust.

Pseudopseudohypoparathyroidism (thirty letters):
A mild form of inherited pseudohypoparathyroidism that simulates the symptoms of
the disorder but isn’t associated with abnormal levels of calcium and phosphorus
in the blood.

Floccinaucinihilipilification (twenty-nine letters):
The estimation of something as valueless. Ironically,
floccinaucinihilipilification is a pretty valueless word itself; it’s almost
never used except as an example of a long word.

Antidisestablishmentarianism (twenty-eight letters):
Originally described opposition to the disestablishment of the Church of
England, but now it may refer to any opposition to withdrawing government
support of a particular church or religion.

Supercalifragilisticexpialidocious (thirty-four letters)
Mary Poppins described it as the word to use “when you have nothing to say.” It
appears in some (but not all) dictionaries.

Incomprehensibilities (twenty-one-letters):
This word set the record in the 1990s as the longest word “in common usage.”
```

## Output: 

```
Pneumonoultramicros* (forty-five letters):  A  lung  disease
caused  by  the  inhalation  of  silica  or   quartz   dust.
Pseudopseudohypopar*  (thirty  letters):  A  mild  form   of
inherited pseudohypoparathyro* that simulates  the  symptoms
of the disorder but isn’t associated with abnormal  levels
of calcium and phosphorus in the blood. Floccinaucinihilipi*
(twenty-nine  letters):  The  estimation  of  something   as
valueless.  Ironically,  floccinaucinihilipi*  is  a  pretty
valueless word itself; it’s almost never used except as an
example of a long word.  Antidisestablishmen*  (twenty-eight
letters):   Originally   described   opposition    to    the
disestablishment of the Church of England, but  now  it  may
refer to any opposition to withdrawing government support of
a  particular  church  or   religion.   Supercalifragilisti*
(thirty-four letters) Mary Poppins described it as the  word
to use “when you have nothing to  say.”  It  appears  in
some  (but  not  all)   dictionaries.   Incomprehensibiliti*
(twenty-one-letters* This word set the record in  the  1990s
as the longest word “in common usage.”
```
