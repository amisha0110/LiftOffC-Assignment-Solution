/**
 * C program to check whether given alphabet is vowel or consonant
 */

 #include <stdio.h>

 int main ()
 {
     int lowercase ,uppercase ;
     char c;
     /*
      * Input alphabet from the user
      */

      printf ("Enter alphabet\n");
      scanf ("%c" , &c);
      switch (c)
      { if
          case 'a':
                   printf ("vowel\n");
                   break;

          case 'e':
                   printf ("vowel\n");
                   break;

          case 'i':
                   printf ("vowel\n");
                    break;

          case 'o':
                  printf ("vowel\n");
                  break;

          case'u':
                  printf ("vowel\n");
                  break;

          case 'A':
                  printf ("vowel\n");
                  break;

          case 'E':
                   printf ("vowel\n");
                   break;

          case 'O':
                  printf ("vowel\n");
                  break;

          case 'I':
                  printf ("vowel\n");
                  break;

          case 'U':
                   printf ("vowel\n");
                   break;
          else
               printf ("consonant\n");
      }

          return 0;

      }



