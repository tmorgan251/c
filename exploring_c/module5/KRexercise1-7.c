/*
 * K&R Exercise 1-7. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
 */

 #include <stdio.h>
 int main() {
     int c;
     int prev_c;

     // get user input
     while ((c = getchar()) != EOF) {
       // skip duplicate spaces
       if (c == 32 && prev_c == 32) {
          continue;
       }
       putchar(c);
       prev_c = c;
     }
 }

 /*
 This will be provided as input to your program: Copy

 But soft  what light     through yonder window breaks
 It is    the east and  Juliet is the sun
 Arise fair sun   and kill the envious moon
 Who  is  already  sick  and  pale  with  grief

 Expected output from your program:

 But soft what light through yonder window breaks
 It is the east and Juliet is the sun
 Arise fair sun and kill the envious moon
 Who is already sick and pale with grief

  */
