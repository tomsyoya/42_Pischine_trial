#include <stdio.h>

/*
• Create a recursive function that returns the factorial of the number given as a
parameter.
• If there’s an error, the function should return 0.
*/

int ft_recursive_factorial(int nb)
{
    if(nb < 0 || nb > 12) return 0;
    if(nb == 0 || nb == 1) return 1;

    return nb * ft_recursive_factorial(nb - 1);
}

int main(void)
{
    // test case
    /* 
     - negative number
     - consideration of 0 
     - consideration of int max(2147483647)
     - 負の数の考慮
     - 0の考慮
     - intの最大値の考慮
     */
    int i = 1;
    int x = 0;
    for(x = -11; x<15; x++){
        i = ft_recursive_factorial(x);
        printf("%dの階乗：%d\n", x,i);
    }
    return 0;
}

/*
0! = 1
1! = 1
2! = 2
3! = 6
4! = 24
5! = 120
6! = 720
7! = 5040
8! = 40320
9! = 362880
10! = 3628800
11! = 39916800
12! = 479001600
13! = 6227020800
14! = 87178291200
*/