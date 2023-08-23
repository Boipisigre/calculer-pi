/*
* calcul de pi formule le Leibniz
gcc -O2 -Wall -o bellardpi bellard.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DEFAULT_ITER 8

long double calculer_pi(double nbiter)
{
  long double term1;
  long double term2 ;
  long double term3 ;
  long double term4;
  long double term5 ;
  long double uno ;
  long double kvar ;
  long double duo;
  long  double base ;
  long double  pi;

  uno = 1.0;
  duo = 2.0;
  kvar = 4.0 ;
  base = 16.0;
  pi = 0.0 ;

 /* printf("%ld \n",nbiter); */

    for (double i = 0; i < nbiter; ++i)
    {
      term1 = uno  / pow(base, i ) ;
      term2 = kvar / ((8*i) + 1)  ;
      term3 = duo  / ((8*i) + 4) ;
      term4 = uno  / ((8*i) + 5) ;
      term5 = uno  / ((8*i) + 6) ;
    /*  printf("1 - %.25Lf ", term1);
      printf("2 - %.25Lf ", term2);
      printf("3 - %.25Lf ", term3);
      printf("4 - %.25Lf ", term4);
      printf("5 - %.25Lf ", term5);
      printf("PI = %.25Lf \n ", pi);
      */
      pi += term1 * (term2 - term3 - term4 -term5) ;

;      }

    return pi ;

}
/**
 * Print a usage message and exit
 */
void usage_exit(void)
{
	fprintf(stderr, "usage: nombre d [iteration] min 110000 \n");
	exit(1);
}

/**
 * MAIN
 *
 * See usage_exit() for usage.
 */
int main(int argc, char **argv)
{
  long iteration;
  char *endptr;
  long double resultat ;

  switch (argc) {
    case 1:
      iteration= DEFAULT_ITER;
      break;

    case 2:
      iteration = strtol(argv[1], &endptr, 10);
      if (*endptr != '\0') { usage_exit(); }
      break;

    default:
      usage_exit();
  }
  if (iteration < 2) { usage_exit(); }
 resultat = 0.0;
	resultat = calculer_pi(iteration);
  printf("%.25Lf", resultat);
    return 0;
}
