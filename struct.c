#include<stdio.h>
#include<string.h>
struct family{
char name[50], address[50], occupation[50];
int age, salary;
}s;
int main() {
   printf("enter the number of your family member : ");
   int member;
   scanf("%d",&member);
   int i=0;
   for(i=0;i<member;i++)
   {printf("\n");
   printf("Enter name:\n");
   fgets(s.name, sizeof(s.name), stdin);
   printf("Enter address:\n");
   fgets(s.address, sizeof(s.address), stdin);
   printf("Enter Occupation:\n");
   fgets(s.occupation, sizeof(s.occupation), stdin);
   printf("Enter Age:\n");
   scanf("%d",&s.age);
   printf("Enter Salary:\n");
   scanf("%d",&s.salary);
   printf("Displaying Information:\n");
   printf("Name:\n");
   printf("%s",s.name);
   printf("Address:\n");
   printf("%s",s.address);
   printf("occupation:");
   printf("%s",s.occupation);
   printf("Age:%d\n",s.age);
   printf("Salary:%d\n",s.salary);
   }
   return 0;
}
