//https://www.youtube.com/watch?v=87SH2Cn0s9A&list=WL&index=127&t=1516s
//https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm
#include <stdio.h>
//"standard library"
#include <stdlib.h>
//string library, imports string methods
#include <string.h>
#include <math.h>

int main(){
/*
add, sub, mul, div, mod, increment, decrement
*/    

int a = 4, b = 5, c = 6, d = 7, e = 8;
int add = a + b;
int mul = add % c;
float div = mul / d;
float result = (div * e);

char expr[] = "(((a + b) % c)/d)*e";
printf("The result of the expression \"%s\" is: %f\n", expr, result);
    return 0;
}