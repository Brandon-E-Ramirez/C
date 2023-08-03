#include <stdio.h>
//https://www.tutorialspoint.com/format-specifiers-in-c
int main(){

//format specifier % = defines and formats a type of data to be displayed
int val = 735261109;
float item1 = 5.325;
float item2 = 3.0;
float item3 = 9434535.32378;
char initialFirst = 'B';
char nameFirst[] = "Brandon";
char nameLast[] = "Ramirez";
char defrag[] = {'B', 'r', 'a', 'n','d', 'o','n'};


printf("Signed Decimal format: %d\n", item3);
printf("Double format: %lf\n", item3);
printf("Float format: %f\n", item3);
printf("Character: %c\n", initialFirst);
printf("Scientific Notation: %e\n", item3);
printf("Long format: %ld\n", item2);
printf("Hex: %x\n", val);
printf("Octal: %o\n", val);
printf("Pointer: %p\n", val);


printf("First name: %s\n", nameFirst);
printf("Last name: %s\n", nameLast);
printf("Defragmented name: %s\n", defrag);


    return 0;
}