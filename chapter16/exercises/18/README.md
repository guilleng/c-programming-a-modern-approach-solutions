# Chapter 16 - Exercise 18

(a) Each square of a chessboard can hold one piece -- a pawn, knight, bishop,
rook, queen or king -- or it may be empty.  Each piece is either black or white.
Define two enumerated types: `Piece`, which has seven possible values (one of
which is "empty"), and `Color`, which has two.

(b) Using the types from part (a), define a structure type named `Square` that
can store both the type of a piece and its color.

(c) Using the `Square` type from part (b), declare an 8 x 8 array named `board`
that can store the entire contents of a chessboard. 

(d) Add an initializer to the declaration in part (c) so that `board`'s initial
value corresponds to the usual arrangement of pieces at the start of a chess
g ame. A square that's not occupied by a piece should have an "empty" piece
value and the color black.


---

(a)
```C
typedef enum { EMPTY, PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING } Piece;

typedef enum { BLACK, WITHE } Color;
```

(b)
```C
typedef struct {
    Piece piece;
    Color color; 
} Square;
```

(c)
```C
Square board[8][8];
```

(d)
```C
Square board[][] = { { {ROOK,  BLACK}, {KNIGHT, BLACK}, {BISHOP, BLACK}, {QUEEN, BLACK}, {KING,  BLACK}, {BISHOP, BLACK}, {KNIGHT, BLACK}, {ROOK,  BLACK} },
                     { {PAWN,  BLACK}, {PAWN,   BLACK}, {PAWN,   BLACK}, {PAWN,  BLACK}, {PAWN,  BLACK}, {PAWN,   BLACK}, {PAWN,   BLACK}, {PAWN,  BLACK} }, 
                     { {EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK} }, 
                     { {EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK} }, 
                     { {EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK} }, 
                     { {EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK} }, 
                     { {PAWN,  WITHE}, {PAWN,   WITHE}, {PAWN,   WITHE}, {PAWN,  WITHE}, {PAWN,  WITHE}, {PAWN,   WITHE}, {PAWN,   WITHE}, {PAWN,  WITHE} }, 
                     { {ROOK,  WITHE}, {KNIGHT, WITHE}, {BISHOP, WITHE}, {QUEEN, WITHE}, {KING,  WITHE}, {BISHOP, WITHE}, {KNIGHT, WITHE}, {ROOK,  WITHE} } };
```
