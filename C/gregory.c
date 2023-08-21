/*
* calcul de pi formule le Leibniz
gcc -O2 -Wall -o calculpi gregory.c
*/

#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_ITER 100000

long double calculer_pi(long nbiter)
{
  long double numerator;
  long double denominator ;
  long double operation ;
  long double  pi;


  numerator = 4.0;
  denominator = 1.0;
  operation = 1.0;
  pi = 0.0 ;

 /* printf("%ld \n",nbiter); */

    for (long i = 0; i < nbiter; ++i)
    {
        pi = pi +  operation * (numerator / denominator);
        denominator += 2.0;
        operation *= -1.0;

      }

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
  if (iteration < 100000) { usage_exit(); }
 resultat = 0.0;
	resultat = calculer_pi(iteration);
  printf("%.25Lf", resultat);
    return 0;
}
