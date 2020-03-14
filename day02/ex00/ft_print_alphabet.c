#include <stdio.h>

/*
* 問題文原文：
* Create a function that displays the alphabet in lowercase, on a single line, by
* ascending order, starting from the letter ’a’.
* 
* Turn-in directory : ex00/
* Files to turn in : ft_print_alphabet.c
* Allowed functions : ft_putchar
* 
* 訳文:
* aから始まる小文字のアルファベットを昇順で １行で出力する関数を作成しなさい。
*
* 提出するディレクトリ:ex00/
* 提出するファイル： ft_print_alphabet.c
* 使用できる関数： ft_putchar
*
*/

//指定された文字を標準出力
void ft_putchar(char c){
    putchar(c);
}

//a~zの文字を1行で出力する
void ft_print_alphabet(void){
    int alphabet_count; //アルファベットの総数
    char alphabet_char; //表示するアルファベット
    int i; //ASCIIコードに加算するための数字

    alphabet_count = 26;
    alphabet_char = 'a';
    i = 0;

    //ASCIIコードに数を加算して、アルファベットを生成する
    while (i < alphabet_count){
        ft_putchar(alphabet_char + i);
        i++;
    };
}

int main(){
    ft_print_alphabet(); //実行結果：abcdefghijklmnopqrstuvwxyz
    return 0;
}