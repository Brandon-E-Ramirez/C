//https://www.techonthenet.com/c_language/constants/create_define.php
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//these macros are evalauted by preprocessor (i.e. saves on resources). It does
//the same as a regular constant
#define MY_PATH "/path/to/file"
#define SIZE 20 //globally defined macro directive
#define PRODUCT(X, Y) (X) * (Y)
int main(){

    const float PI = 3.14;//
    printf("Value of π(float): %f\n", PI);
    printf("Value of π(double): %lf\n", PI);

int arr[SIZE];
printf("Array size: %d\n", sizeof(arr));

int a = 3, b = 9;
printf("%d\n", PRODUCT(a, b));
return 0;
}