/*
 * K&R Exercise 1-6. Count blanks and new lines. We skip tabs because it is a little tricky.
 */

 #include <stdio.h>
 int main(void) /* count new lines in input */
 {
     // initialize variables
     int c, nl;
     nl = 0;
     int blanks = 0;

     // read in char values until the end of file
     while ((c = getchar()) != EOF)
         // count new lines
         if (c == '\n')
             ++nl;
         // count blanks
         else if (c == ' ') {
             ++blanks;
         }
     printf("%d %d\n", blanks, nl);
 }

 /*
 This will be provided as input to your program: Copy

 But soft what light through yonder window breaks
 It is the east and Juliet is the sun
 Arise fair sun and kill the envious moon
 Who is already sick and pale with grief

 Expected output from your program:

 29 4
  */
