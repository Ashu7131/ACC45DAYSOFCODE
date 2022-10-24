/*Write a program to print characters*/
#include <stdio.h>

void main() {
    char i,chr;
    printf("Enter the starting character: ");
    scanf("%c",&chr);
    for(i=chr;i<='z';i++){
       printf("%c\n",i);
    }
}
