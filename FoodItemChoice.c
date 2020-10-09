#include<stdio.h>
#include<conio.h>
void main() 
{
int num;
clrscr();
printf("");
scanf("%d", &num);
if(num == 1) 
{
printf("Food Item - Pizza\nPrice - RS 239\n");
}
else if(num == 2)
{
printf("Food Item - Burger\nPrice - RS 129\n");
}
else if(num == 3)
{
printf("Food Item - Pasta\nPrice - RS 179\n");
}
else if(num == 4)
{
printf("Food Item - French Fries\nPrice - RS 99\n");
}
else if(num == 5)
{
printf("Food Item - Sandwich\nPrice - RS 149\n");
}
else if(num == 0)
{
printf("1. Pizza, RS 239\n2. Burger, RS 129\n3. Pasta, RS 179\n4. French Fries, RS 99\n5. Sandwich, RS 149\n");
}
else
{
printf("You Have Entered An Invalid Number! Please Enter Any Valid Number From 0 To 5.");
}
getch();
}
