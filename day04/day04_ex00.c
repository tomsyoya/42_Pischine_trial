#include <stdio.h>

/*
• Create an iterated function that returns a number. This number is the result of a
factorial operation based on the number given as a parameter.
• If there’s an error, the function should return 0.
• Your function must return its result in less than two seconds.
*/

int ft_iterative_factorial(int nb)
{
    int result = 1;

    if(nb < 0 || nb > 12) return 0;
    while(nb > 0){
        result *= nb;
        nb--;
    }
    return result;
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
        i = ft_iterative_factorial(x);
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