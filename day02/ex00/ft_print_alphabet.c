/*
* 問題文原文：
* Create a function that displays the alphabet in lowercase, on a single line, by
* ascending order, starting from the letter ’a’.
*
* Here’s how it should be prototyped :
* void ft_print_alphabet(void);
* 
* 訳文:
* aから始まる小文字のアルファベットを昇順で １行で出力する関数を作成しなさい。
* 
* 実装するべき関数：
* void ft_print_alphabet(void);
*/

#include <stdio.h>

//アルファベットを出力する関数
void ft_print_alphabet(void){
    const int alphabet_count = 26;

    //ASCIIコードに数を加算して、アルファベットを生成する
    char inital_char = 'a';
    for (int i = 0; i < alphabet_count; i++){
        printf("%c", inital_char + i);
    }
}

int main(){
    //アルファベットを一列で出力
    ft_print_alphabet(); //実行結果：abcdefghijklmnopqrstuvwxyz
    return 0;
}