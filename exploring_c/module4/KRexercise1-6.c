/*
LBS290 Exercise 4. Fix the syntax errors in this program.
Fun Fact:Dr. Chuck used this exact assignment while teaching C - in LBS 290 - Fall 1991.
 */
 /* Assignment 4 LBS 290 - Fall 1991 - syntax errors */

 #include "stdio.h"

 int main () {
   char c;
   int value;
   int i;
   float x;

   printf("Hello there and welcome to the program\n");
   i = 10;
   x = 2.50;
   x = x + 1.0;
   value = 15;
 /* This is a comment */
   printf("This statement should print out, why doesn't it?\n");
 /* And another comment */
   printf("This statement does print out, yay!\n");
 }
/*
Expected output from your program:

Hello there and welcome to the program
This statement should print out, why doesn't it?
This statement does print out, yay!
 */
