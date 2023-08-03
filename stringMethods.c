#include <stdio.h>
#include <string.h>

int main(){
char nameF[15] = "Brandon";
char nameL[] = "Ramirez";
char uni[] = "University of houston - Clear Lake";

char src[15] = "123456789";
char dest[sizeof(src)+1] = "0";


char age[] = "21";
char grammar[] = ", ";
char income[] = "20.4k";
strcat(age, grammar);
strcat(age, income);
printf("%s\n", age);


strcpy(dest, src);
printf("\"dest\" contents: %s\n", dest);

strcpy(nameF, nameL);
printf("Full name: %s\n", nameF);

char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("Length of the alphabet: %d\n", strlen(alphabet));
printf("Size of alphabet: %d\n", sizeof(alphabet));
    return 0;
}