/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
  //variables
  int tot,num,i;

  //print
  printf("enter a number :");
  scanf("%d",&num);
  
  //loop
  for(i=0;i<=num;i++)
  {
    tot+=i;
  }
  //printing the valuue 
  printf("Total is %d",tot);

  return 0;
}

