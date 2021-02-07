/**
 * C program to convert celsius into fahrenheit
 */

 #include <stdio.h>

 int main ()
 {
    float celsius,fahrenheit;

    /*
     *Input Celsius in temperature
     */

     printf("Please enter temperature in celsius");
     scanf ("%f", &celsius);

     /*
      * Convert the temperature from celsius into fahrenheit
      */

      farhenheit = ((9/5) * celsius) + 32;

      /*
       * Print results of all conversion
       */

       printf("\n%.2f celsius = %.2f farhenheit" , Celsius , Fahrenheit );


    return 0;
 }
