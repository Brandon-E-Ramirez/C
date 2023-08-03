//https://www.tutorialspoint.com/cprogramming/c_bitwise_operators.htm
#include <stdio.h>
//"standard library"
#include <stdlib.h>
//string library, imports string methods
#include <string.h>
#include <Math.h>
int main(){
//9-bits: 256  128  64  32  16  8  4  2  1

unsigned int x = 170; //010101010
unsigned int y = 491; //111101011
int c = 0;

c = x & y;//AND
printf("AND: %d\n",c);

c = x | y;//OR
printf("OR: %d\n",c);

c = x ^ y; //XOR
printf("XOR: %d\n",c);

c = ~x; //NEGATE
printf("NOT: %d\n",c);


c = x << 2;//binary left shift 
printf("SL: %d\n",c);

c = x >> 2;//binary right shift
printf("SR: %d\n",c);

    return 0;
}




