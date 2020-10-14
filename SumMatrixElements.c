#include<stdio.h>
#include<conio.h>
int main() 
{
int array[3][3], i, j, num, sum = 0;
int *ptr;
clrscr();
printf("Input Elements In The Matrix And Array Are:-\n");
for(i=0; i<3; i++) 
{
for(j=0; j<3; j++) 
{
printf("Element - [%d] , [%d] : ", i, j);
scanf("%d", &array[i][j]);
}
}
printf("\nThe Entered Elements In The Matrix And Array Are:-");
for(i=0; i<3; i++) 
{
printf("\n");
for(j=0; j<3; j++) 
printf("%d\t",array[i][j]);
}
printf("\n\n");
ptr = array;
for(i=0; i<3; i++)
{
for(j=0; j<3; j++) 
{
sum = sum + *ptr;
ptr++;
}
}
printf("The Sum Of All Diagonal Elements Is = %d",sum);
getch();
return 0;
}
