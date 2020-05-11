/**
* formatIO.c
* @author bulbasaur
* @description 
* @created 2020-05-05T10:37:06.465Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-05T11:01:10.126Z+08:00
*/

#include <stdio.h>



int main(int argc, char const *argv[])
{
    /*
    1. 格式化输入
        a. % [flags][width][.prec][hlL] type
        b. flags: -(左对齐)， +(在前面放 + or —) (space)[正数留空]  0(0填充)
    */
    printf("%9d\n", 123);
    printf("%+9d\n", 123);
    printf("%-9d\n", 123);
    printf("%-+9d\n", 123);
    printf("%09d\n", 123);

    printf("--------------------\n");

    
    /*
    1. 格式化输入
        a. % [flags][width][.prec][hlL] type
        b. width or prec:
            i. number: 最小字符数
            ii. *: 下一个参数是字符数
            iii. .number: 小数点后的位数
            iv. .*: 下一个参数是小数点后的位数
    */
    printf("%9.2f\n", 123.0);
    printf("%*d\n", 6, 123);

    printf("--------------------\n");

    
    /*
    1. 格式化输入
        a. % [flags][width][.prec][hlL] type
        b. hlL:(修饰符)
            i. hh: 单个字节
            ii. h: short
            iii. l: long
            iv: ll: long long
            L: long double
    */
    printf("%hhd\n", (char)12345);

    printf("--------------------\n");

    /*
    1. 格式化输入
        a. % [flags][width][.prec][hlL] type
        b. type:
            i. i or d: int
            ii. u: unsigned int
            iii. o: 八进制
            iv: x: 十六进制
            v: X: 字母大写的十六进制
            vi: f or F: float, 6
            vii: e or E: 指数
            viii: g: float
            ix: G: float
            x: a or A: 十六进制浮点
            xi: c: char
            xii: s: string
            xiii: p: pointer
            xiv: n: 读入/写入的个数  *********
    */
   int num;
   printf("%hhd%n\n", (char)12345, &num);
   printf("\n");
   printf("%d%n\n", 12345, &num);
   printf("\n");
   printf("%dty%n\n", 12345, &num);
   printf("\n");
   

    printf("--------------------\n");

    /*
    2. 格式化输出
        a. scanf: % [flag] type
        b. flag:
            i. *: 跳过
            ii. 数字： 最大字符数
            iii. hh: char
            iv: h: short
            v: l: long or double
            vi: ll: long long
            vii: L: long double
    */
    int n;
    printf("Input twice: ");
    scanf("%*d%d", &n);
    printf("%d\n", n);
    
    
    return 0;
}
