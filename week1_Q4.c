/**
 * C program to enter marks of five subjects and find percentage and grades
 */

 #include <stdio.h>

 int main()
 {
     int phy,chem,maths,bio,comp;
     float per;
     /*
     Input marks of five subjects from the user
     */
     printf("Enter five subjects marks");
     scanf("%d%d%d%d%d",&phy,&chem,&bio,&maths,&comp);

     /*
      * Calculate percentage
      */
      per= (phy+chem+maths+bio+comp)/5.0;

      printf("percentage=%.2f\n",per);

      /*
       *find grade according to the percentage
       */
       if (per >= 90)
       {
           printf ("Grade A");
       }
       else if (per >= 80)
       {
           printf ("Grade B");
       }
       else if (per >= 70)
       {
         printf ("Grade C");
       }
       else if (per >= 60)
       {
         printf ("Grade D");
       }
       else if (per >= 40)
       {
         printf ("Grade E");
       }
       else if (per < 40 )
       {
         printf ("Grade F");
       }

        return 0;

 }
