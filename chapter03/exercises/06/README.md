# Chapter 03 - Exercise 06

Show how to modify the `addfrac.c` program of Section 3.2 so that the user is
allowed to enter fractions that contain spaces before and after each `/`
character.

Here below is a transcription of the `addfrac.c` source code as in page 46.

```C
/* Adds two fractions */

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
```


---

See `ex06.c`.  
