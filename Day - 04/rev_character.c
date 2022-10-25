/*Write a program to print reverse characters*/

void main() {
    char i,chr;
    printf("Enter the character: ");
    scanf("%c",&chr);
    for(i='z';i>=chr;i--){
       printf("%c\n",i);
    }
}
