/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main(void) {
int mark1 , mark2 ;

//input
float avg;
printf("Enter the mark1 : ");
scanf("%d" , &mark1);

//input
printf("Enter the mark2 : ");
scanf("%d" , &mark2 );

//avg
avg = (float)(mark1 + mark2) / 2 ;
printf("Average is = %.2f" , avg);
return 0;
}
