#include <stdio.h>
# define pi 3.14
int main(void) 
{
  float centi,fah;
  printf ("enter temperature in celcius :");
  scanf("%f",&centi);
  fah=centi*9/5+32;
  printf("\nthe tempereture in fahrenhite is :%f",fah);


  return 0;
}