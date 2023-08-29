
//Write a C-program to calculate sum of two numbers if the user enters +,difference of two numbers if the user enetrs -,product of two numbers  if the user enters *,quotient of two numbers if the user enters /.
#include<stdio.h>
  int main () {
  float no1,no2;
  char operator;
  printf("Enter no.1: ");
  scanf("%f", &no1);
  printf("Enter no.2: ");
  scanf("%f", &no2);
printf("Enter the operand: ");
scanf("\n%c", &operator);
  if (operator == '+') {
 printf("%f", no1+no2);
}
 else if (operator == '-') {
 printf("%f", no1-no2);
}
 else if (operator == '*') {
  printf("%f", no1*no2);
}
 else if (operator == '/') {
 printf("%f", no1/no2);
}
  else {
 printf("please input valid number");
}
 return 0;
}
