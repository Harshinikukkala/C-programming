#include<stdio.h>
   int main () {
   int  e1,e2,e3,avg;
   printf("Enter marks in exam1: ");
   scanf("%d", &e1);
   printf("Enter marks in exam2: ");
   scanf("%d", &e2);
   printf("Enter marks in exam3: ");
   scanf("%d", &e3);
   avg=(e1+e2+e3)/3;
  if (avg>85)
  {
   printf("HIGH ACHIEVER");
 }
  else if (avg>=70 && avg<=85)
 {
  printf("PASS");
 else if (avg<70)
} 
{ 
 printf("NEEDS IMPROVEMENT");
}
  return 0;
} 

