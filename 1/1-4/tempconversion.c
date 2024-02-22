#include <stdio.h>

/*  print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
int main(void)
{
  float fahr, celsius;
  float lower, upper, step;

  lower = -17; /* lower limit of temp scale */
  upper = 50; /* upper limit */
  step = 1; /* step size */

  celsius = lower;
  printf("Celsius to Fahrenheit\n");
  while (celsius <= upper) {
      fahr = (9.0/5.0) * (celsius+32.0);
      printf("%6.0fC \%3.1fF\n", celsius, fahr);
      celsius = celsius + step;
    } 
}
