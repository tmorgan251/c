/*
 * K&R Exercise 1-10. Write a program which prints the words in its input, one per line. A word is any string separated by a space or newline.
 */

 #include <stdio.h>
 int main() {
     int c;
     while ((c = getchar()) != EOF) {
        if (c == 32) {
            c = 10;
        }
       putchar(c);
     }
 }

 /*
 This will be provided as input to your program: Copy

 But soft what light
 through yonder window
 breaks

 Expected output from your program:

 But
 soft
 what
 light
 through
 yonder
 window
 breaks
  */
