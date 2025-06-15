/*
Celsius to Fahrenheit Conversion

You should write a function called faren(cel) that takes as input a double Celsius temperature and converts it and returns the equivalent Fahrenheit value.
 */
 #include <stdio.h>

 double faren(double celsius);

 int main() {
   printf("faren(42) is %.1f\n", faren(42.0));
   printf("faren(0) is %.1f\n", faren(0.0));
   printf("faren(-10) is %.1f\n", faren(-10.0));
   printf("faren(32) is %.1f\n", faren(32.0));
   printf("faren(100) is %.1f\n", faren(100.0));
   printf("faren(212) is %.1f\n", faren(212.0));
 }

 // converts celsius to fahrenhiet
 double faren(double celsius)
 {
   return celsius * 9.0 / 5.0 + 32.0;
 }
 /*
 Expected output from your program:

 faren(42) is 107.6
 faren(0) is 32.0
 faren(-10) is 14.0
 faren(32) is 89.6
 faren(100) is 212.0
 faren(212) is 413.6
  */
