#include<stdio.h>
#include<conio.h>
//write a program to find the number is positive negative or zero
int main(){
int num;
printf("Enter the number\n");
scanf("%d",&num);
if(num>0)
{
printf("%d is positive number",num);
}
else if (num<0)
{
    printf("%d is negative number",num);
}
else
{
    printf("The number is 0");
}

return 0;
}