# Chapter 09 - Exercise 13

Write the following function, which evaluates a chess position:

```C
int evaluate_position(char board[8][8]);
```

`board` represents a configuration of pieces on a chessboard, where the letters
`K`, `Q`, `R`, `B`, `N` and `P` represent White pieces, and the letters `k`,
`q`, `r`, `b`, `n` and `p` represent Black pieces.  `evaluate_position` should
sum the values of the White pieces (`Q = 9`, `R = 5`, `B = 3`, `N = 3`, `P =
1`).  It should also sum the values of the Black pieces (done in a similar way).
The function will return the difference between the two numbers.  This value
will be positive if White has an advantage in material and negative if Black has
an advantage.


---

```C
int evaluate_position(char board[8][8]);

...

int evaluate_position(char board[8][8])
{
    int withe_pieces = 0,
        black_pieces = 0;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            switch( board[i][j] )
            {
                case 'Q':
                    withe_pieces += 9;
                    break;
                case 'R':
                    withe_pieces += 5;
                    break;
                case 'B': case 'N':
                    withe_pieces += 3;
                    break;
                case 'P':
                    withe_pieces ++;
                    break;
                case 'q':
                    black_pieces += 9;
                    break;
                case 'r':
                    black_pieces += 5;
                    break;
                case 'b': case 'n':
                    black_pieces += 3;
                    break;
                case 'p':
                    black_pieces ++;
                    break;
                default:
                    break;
            }
        }
    }

        return withe_pieces - black_pieces;
}
```
