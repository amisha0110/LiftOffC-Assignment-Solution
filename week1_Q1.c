
/**
 *C program to perform all arithimetic operations
 */

 #include <stdio.h>

 int main ()
 {
     int num1, num2;
     int sum, sub, mul, mod;
     float div;

     /*
      *input two numbers from user
      */
      printf("Enter any two numbers: ");
      scanf ("%d%d", &num1, &num2);
      /*
      * perform all arithimetic operations
      */
      sum = num1 + num2
                      ;
      sub = num1 - num2
                      ;
      mul = num1 * num2
                      ;
      div = (float) num1/num2
                      ;
      mod = num1%num2
                     ;
      /*
       * print reults of all arithimetic operations
       */
       printf ("SUM = %d\n", sum);
       printf ("DIFFERENCE = %d\n" , sub);
       printf ("PRODUCT = %d\n" ,mul);
       printf ("QUOTIENT = %f\n",'float div');
       printf ("MODULUS = %d" ,mod);

       return 0;
 }



