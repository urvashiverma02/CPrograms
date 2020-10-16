#include<stdio.h>
#include<conio.h>
struct employee
{
char name[40];
int age, phoneno, salary;
};
void display(struct employee emp[3], int n) 
{
int i;
printf("Name\t\tAge\t\tPhone Number\t\tSalary");
for(i=0; i<n; i++) 
{
printf(emp[i].name, emp[i].age, emp[i].phoneno, emp[i].salary);
}
}
void main() 
{
int i, n=3;
struct employee emp[3];
emp[0].name = "Urvashi";
emp[0].age = 24;
emp[0].phoneno = 1234567890;
emp[0].salary = 40000;
emp[1].name = "Ranjana";
emp[1].age = 25;
emp[1].phoneno = 1234567089;
emp[1].salary = 50000;
emp[2].name = "Aarti";
emp[2].age = 26;
emp[2].phoneno = 1236547890;
emp[2].salary = 60000;
display(emp, n);
getch();
}
