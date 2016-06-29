#include<stdio.h>
#include<conio.h>
void main()
{
 char b;
 clrscr();
 printf(" Enter a letter ");
 scanf("%c",&b);
// printf("%c",b);
 if((b=='a')||(b=='e')||(b=='i')||(b=='o')||(b=='u'))
 {
 printf("Vowles");
 }
 else
 {
 printf("Consonant");
 }
 getch();
 }
