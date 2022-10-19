/*Lowercase to Uppercase conversion*/

#include<stdio.h>
#include<ctype.h>

main(){
	char ch;
	printf("Enter any character value\n");
	ch = getchar();
	printf("The equivalent uppercase character is\n");
	putchar(toupper(ch));
}
