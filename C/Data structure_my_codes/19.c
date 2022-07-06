// take input from the user and check whether it is a number or a character, 
// if a character ,determining whether it is in upperCase or lowerCase.Also Printing its ASCII Value
#include<stdio.h>
#include<ctype.h>

int func_num(char arr[]){
    for (int i = 0; i < 10; i++) {
        if (isdigit(arr[i])) return 1; }
    return 0; }

int main(){   
    char arr[10];
    printf("Enter a number or a character :\n");
    gets(arr);
    if (func_num(arr)) {
        printf("It is an integer.");
        printf("\nASCII Value : %d", arr[0]); }
    else {
        printf("It is a character.");
        if (islower(arr[0])) {
            printf("\nIt is in lower case.");
            printf("\nASCII Value : %d", arr[0]);}
        else {
        printf("\nIt is in upper case.");
        printf("\nASCII Value : %d", arr[0]); } }  
 return 0; }