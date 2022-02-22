/* Programa conversor de temperaturas
// ----------------------------------
// Este programa converte graus Fahrenheit
// em graus Celsius e vice-versa.
/////////////////////////////////////// */

#include <stdio.h>
double celsiusParaFahrenheit (double c);
double fahrenheitParaCelsius (double f);

int main (void)
{
   double far, cel;

   printf ("Temperatura em graus Fahrenheit: ");
   scanf ("%lf", &far);
   cel = fahrenheitParaCelsius (far);
   printf ("igual a %.1f graus Celsius\n", cel);

   printf ("\nTemperatura em graus Celsius: ");
   scanf ("%lf", &cel);
   far = celsiusParaFahrenheit (cel);
   printf ("igual a %.1f graus Fahrenheit\n", far);

   return 0;
}

double celsiusParaFahrenheit (double c)
{
   return 9.0 * c / 5.0 + 32.0;
}

double fahrenheitParaCelsius (double f)
{
   return 5.0 * (f - 32.0) / 9.0;
}
