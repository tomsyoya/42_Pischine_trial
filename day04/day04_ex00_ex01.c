#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int res = 1;
    if(nb < 0 || nb > 12) return 0;
    while(nb > 0){
        res *= nb;
        nb--;
    }
    return res;
}

// 再帰を使った書き方
int ft_recursive_factorial(int nb)
{
    if(nb < 0 || nb > 12) return 0;
    if(nb == 0 || nb == 1) return 1;
    return nb * ft_recursive_factorial(nb - 1);
}

int main(void)
{
    // test case
    int i = 1;
    int x = 0;
    for(x = -11; x<15; x++){
        i = ft_iterative_factorial(x);
        printf("%dの階乗：%d\n", x,i);
    }
    for(x = -11; x<15; x++){
        i = ft_recursive_factorial(x);
        printf("%dの階乗：%d\n", x,i);
    }
    return 0;
}