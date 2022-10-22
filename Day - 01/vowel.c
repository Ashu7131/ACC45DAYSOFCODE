/*Write a program to check given character is vowel or consonats.*/


#include <stdio.h>
#include <ctype.h>

int main() {
  char c;
  printf("Enter a character: ");
  scanf("%c", &c);
  if (isalpha(c)) {
    switch (c) {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
      printf("Given character '%c' is vowel...", c);
      break;
    default:
      printf("Given character '%c' is consonant...", c);
    }
  }
}
