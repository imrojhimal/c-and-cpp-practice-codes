#include<stdio.h>
int main () {
char c;
int i=0;
 int choice, dummy;
do{
 printf("\n 1. Print Hello \n 2. Print C language \n 3. Exit \n");
 scanf("%d", &choice);
 switch(choice)
 { case 1 : printf("Hello"); break;
 case 2: printf("C Language"); break;
 case 3: exit(0); break;
 default: printf("please enter valid choice");
 } printf("Do you want to enter more?");
 scanf("%d", &dummy);
 scanf("%c", &c);
 }while(c == 'y');
}
