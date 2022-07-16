/*
  Title: RMS  
  Author: Guilherme Pedroso 
  Date: July 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>
#include <math.h>

/* <Macros> */

/* <Prototypes> */
float true_rms(float volts[], int N);

/* <Main function> */
int
main()
  {
  float v[5] = {3.1, 2.4, 6.1, 3.3, 1.7};
  printf("Vrms = %.4fV\n", true_rms(v, 5));
  getchar();
  return(0);
  } /* <end main> */

float
true_rms(float volts[], int N)
  {
  register int i;
  float rms = 0.0;

  for(i = 0; i < N; i++)
    {
    volts[i] *= volts[i];
    }  
  for(i = 0; i < N; i++)
    {
    rms += volts[i];
    }

  rms /= N;

  return sqrt(rms);
  }
