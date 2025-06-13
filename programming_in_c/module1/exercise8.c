/*
LBS290 Exercise 8. This program will prompt for 5 floating point numbers.
The program will print out the total of the five numbers and also print out the average.
Fun Fact:Dr. Chuck used this exact assignment while teaching C - in LBS 290 - Fall 1991.
 */

 #include "stdio.h"

 int main () {
   int i;
   float total = 0;
   float average, input;
   for (i = 0; i < 5; i++) {
     scanf("%f", &input);
     total += input;
   }
   average = total / i;
   printf("The total is: %.1f\n", total);
   printf("The average is: %.1f\n", average);
 }

 /*
 This will be provided as input to your program: Copy

 10.0
 5.0
 15.0
 20.0
 10.0

 Expected output from your program:

 The total is: 60.0
 The average is: 12.0

  */
