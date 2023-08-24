/*
* calcul de pi formule le
gcc -O2 -Wall -o arctanpi arctan_pi.c -lm
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


long double calculate_pi()
{
double un ;
double trois ;
long double six ;
long double pi ;


un = 1.0 ;
trois = 3.0 ;
six = 6.0 ;
pi = 0.0 ;

  pi = six * atan( un / sqrt(trois)) ;
  return pi ;

}

int main(int argc, char **argv)
{

  long double resultat ;

 resultat = 0.0;
	resultat = calculate_pi();
  printf("%.25Lf", resultat);
return 0;
}
