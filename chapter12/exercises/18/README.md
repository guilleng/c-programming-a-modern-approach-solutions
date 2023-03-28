# Chapter 12 - Exercise 18

Write the `evaluate_position` function described in Exercise 13 of Chapter 9. Use pointer arithmetic -- not subscripting -- to visit array elements. Use a single loop instead of nested loops.

---

```
int evaluate_position(char *board, int n)
{
    int withe_pieces = 0,
        black_pieces = 0;
    char *p;

    for (p = board; p < board + n*n ; p++)
    {
        switch(*p)
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

    return withe_pieces - black_pieces;
}
```
